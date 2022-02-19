#include <stdio.h>

//윤년 구하기
int main(void)
{
    unsigned int a;
    scanf("%i", &a);
    
    if ((a % 4) == 0)
    {
        if ((a % 100) != 0 || (a % 400) == 0)
        {
            printf("%i",1);
            return 0;
        }
        
        else
        {
            printf("%i",0);
            return 0;
        }
    }
    
    printf("%i",0);
}