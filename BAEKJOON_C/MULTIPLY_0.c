#include <stdio.h>

int main(void)
{
    unsigned int a,b;
    scanf("%i", &a);
    scanf("%i", &b);

    int b_1 = b%10;
    int b_2 = (b/10)%10;
    int b_3 = b/100;

    printf("%i\n", a * b_1);
    printf("%i\n", a * b_2);
    printf("%i\n", a * b_3);
    printf("%i", a * b);
}