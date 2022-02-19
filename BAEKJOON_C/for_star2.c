#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);

    for(int i = n; i >= 1; i-- )
    {
        for(int j = 1; j <=n; j++)
        {
            if(j < i)
            {
                printf(" ");
            }

            else
            {
                printf("*");
            }
        }
        if(i != 1)
        {
        printf("\n");
        }

        else
        {
            return 1;
        }
    }
}