#include <stdio.h>

void star(int i, int j, int a);

int main(void)
{
    int n;
    scanf("%i", &n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            star(i, j, n);
        }

        printf("\n");
    }
}

void star(int i, int j, int a)
{   
        if((i / a) % 3 == 1 && (j / a) %3 == 1)   // 3*3 사각형공백이 들어가는 위치 : 행 열을 3으로 나누었을 때 나머지가 1.
        {                                        // 9*9 사각형은 행열을 3으로 각각 나누어 9등분 할 수 있다.
            printf(" ");                        //i j는 변하지 않는다.
        }

        else if ( a == 1)                       //if분기 중요함.
        {
            printf("*");
        }

        else
        {
           star(i, j, a/3);
        }    
}