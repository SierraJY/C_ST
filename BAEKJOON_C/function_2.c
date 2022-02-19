#include <stdio.h>
//셀프넘버 문제
//n은 d(n)의 생성자
//d(75)는 75+7+5 = 87임.   d(51) = 57임. 101은 91과 100 생성자가 2개임.
//셀프넘버란 생성자가 없는 숫자

//결론 : 숫자 k보다 작은 모든 정수를 d()함수에 넣어서 나온는 값 과 k가 같은 것이 없으면 그 수는 셀프넘버.

//조건 10000보다 작은 수..
int self_number(int a);

int main(void)
{
    for (int k = 1; k < 10000; k++)
    {
        int same = 0;
        for (int j = 1; j < k; j++)
        {
            if(self_number(j) == k)
            {
                same ++;
            }
        }

        if (same == 0)
        {
            printf("%i\n", k);
        }
    }
}

int self_number(int a)
{
    int a_0 = a;
    int d_n = a;

    while(a_0 > 0)
    {
        d_n += (a_0 % 10);
        a_0 /= 10 ;
    }

    return d_n;
}