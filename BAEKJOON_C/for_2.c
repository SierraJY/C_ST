#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);

    int sum = 0;
    
    for(int i = 1; i <= n; i ++)
    {
        sum += i;
    }
    
    printf("%i", sum);
}