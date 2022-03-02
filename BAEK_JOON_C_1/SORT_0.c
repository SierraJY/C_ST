#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);

    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &numbers[i]);
    }

    int art;
    for(int j = 0; j < n; j++)
    {
        for(int q = 0; q < n; q++)
        {
            if(j == q)
            {
                continue;
            }

            else if(numbers[j] < numbers[q])
            {
                art = numbers[q];
                numbers[q] = numbers[j];
                numbers[j] = art;
            }
        }
    }

    for (int k = 0; k < n; k++)
    {
        printf("%i\n", numbers[k]);
    }
}