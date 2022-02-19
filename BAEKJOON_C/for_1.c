#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);
    
    for(int i = 0; i <n; i++)
    {
        int a = 0;
        int b = 0;
        
        scanf("%i %i", &a, &b);
        printf("%i\n", a+b);
        
    }
}