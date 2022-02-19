#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);
    
    for(int i = 1; i <= n; i ++)
    {
        int a,b;
        scanf("%i %i",&a, &b);
        
        printf("Case #%i: %i\n", i, a+b);
    }
}