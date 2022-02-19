#include <stdio.h>

int main(void)
{
    int a,b;
    
    while(scanf("%i %i", &a, &b) != EOF)
    {
        printf("%i", a + b);
    }
}