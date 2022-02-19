#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);

    for (int i = 1; i <10; i++)
    {
        printf("%i * %i = %i\n", n, i, n*i);
    }
}