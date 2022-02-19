#include <stdio.h>



int main(void)
{
    int a,b;

    while(1)
    {
        scanf("%i %i", &a, &b);

        if(a == 0 && b ==0)
        {
            break;
        }

        else
        {
            printf("%i\n", a+b);
        }


    }
}