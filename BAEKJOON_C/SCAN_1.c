#include <stdio.h>

int main(void)
{
    unsigned int a,b,c;
    scanf("%i %i %i", &a, &b, &c);
    printf("%i\n", (a+b)%c);
    printf("%i\n", (((a%c)+(b%c))%c));
    printf("%i\n", (a*b)%c);
    printf("%i\n", (((a%c)*(b%c))%c));
}