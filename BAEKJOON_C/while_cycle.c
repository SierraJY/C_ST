#include <stdio.h>

int main(void)
{
    int number;
    scanf("%i", &number);

    int origin = number;

    int a, b, c ,d;

    int newnumber;

    int cycle;


    while(1)
    {   a = number/10;
        b = number % 10;
        c = (a + b) % 10;
        d = (b * 10);
        newnumber = d + c; 

        cycle++;
        

        if(origin == newnumber)
        {
            break;
        }

        number = newnumber;
    }

    printf("%i", cycle);
}