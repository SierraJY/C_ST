#include <stdio.h>

int main(void)
{
    int a;
    scanf("%i", &a);
    
    if(a <= 100 && a >= 90) //and는 && or은 ||
    {
        printf("A");
    }
    
    else if(a >= 80)
    {
        printf("B");
    }
    else if(a >= 70)
    {
        printf("C");
    }
    else if(a >= 60)
    {
        printf("D");
    }    
    else
    {
        printf("F");
    }
    
    
}