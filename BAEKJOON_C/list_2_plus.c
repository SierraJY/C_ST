#include <stdio.h>
#include <math.h>

//받은 수가 몇자리 수이고 자리 마다 숫자들을 분리 시키는 방법.

int main(void)
{
    int a;
    int howlong =0 ;
    scanf("%i", &a);

    int a_duplicate = a;

    while(a > 0)
    {
        a /= 10;
        howlong ++;
    }

    int a_numbers[howlong];
    int i = 0;

    while(a_duplicate > 0)
    {
        a_numbers[i] = (a_duplicate % 10);
        a_duplicate /= 10;
        i++;

    }



    printf("howlong : %i\n", howlong);

    for(int i = howlong-1; i >=0; i--)
    {
        printf("%.0f자리 수 : %i\n", pow(10,i), a_numbers[i]);  //pow함수 반환값은 double형
    }

    
}