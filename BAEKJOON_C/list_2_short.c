#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%i %i %i", &a, &b, &c);

    int total = a*b*c;

    int counts[10] = {0,};

    while(total > 0)
    {
        counts[total % 10] ++;
        total /= 10;

    }

    for(int i = 0; i < 10; i++)
    {
        printf("%i", counts[i]);
    }
}