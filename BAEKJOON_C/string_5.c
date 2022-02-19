#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int n[2];

    char backward[2][4];

    for(int i = 0; i <2; i++)
    {
        scanf("%i", &n[i]);
    }

    for (int j = 0; j < 2; j++)
    {
        int k = 0;
        
        while(n[j] > 0)
        {
            backward[j][k] = (n[j] % 10) + 48;  //(%)나머지는 정수형인데 넣으려는 배열은 문자형배열이기 때문에 아스키코드로 들어가짐.
            n[j] /= 10;                         //그렇기 때문에 문자0의 숫자 아스키코드인 숫자48을 더해서 넣으면 정수그대로 문자형으로 넣어짐.
            k++;
        }

    }

    for ( int k = 0; k < 2; k++)
    {
        n[k] = atoi(backward[k]);
    }

    if(n[0] > n[1])
    {
        printf("%i", n[0]);
    }

    else
    {
        printf("%i", n[1]);
    }

}