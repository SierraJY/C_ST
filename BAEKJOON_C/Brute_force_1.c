//분해합
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);

    int is_have = -1; //생성자 있으면 1 없으면 -1

    for(int i = 1; i < n; i++)
    {   int q = i;
        int c = i;

        while(i > 0)
        {
            c += (i%10);
            i /= 10;
        }
                                //중요!!!!!!!
        i = q;                //for문 안에 while문에서 i를 매개변수로 쓸때.. while끝나고 i를 돌려놓아야함!! 그렇지 않으면 while에서 변환된
                             //i에 i++하는 것임.
        if(c == n)
        {
            printf("%i", i);
            is_have = 1;
            break;
        }
    }

    if(is_have == -1)
    {
        printf("0");
    }
}