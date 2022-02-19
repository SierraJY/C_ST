#include <stdio.h>

int list_max(int size, int thelist[]);
int list_min(int size, int thelist[]);


int main(void)
{
    int n;
    scanf("%i", &n);

    int list[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%i", &list[i]);
    }

    printf("%i %i", list_min(n, list), list_max(n, list));

    
}

int list_max(int size, int thelist[])
{
    int max;

    for(int j = 0; j < size; j++)
    {
        if(j == 0)
        {
            max = thelist[0];
        }

        
        if(max < thelist[j])
        {
            max = thelist[j];
        }
    }

    return max;
}

int list_min(int size, int thelist[])
{
    int min;

    for(int j = 0; j < size; j++)
    {
        if(j == 0)
        {
            min = thelist[0];
        }

        
        if(min > thelist[j])
        {
            min = thelist[j];
        }
    }

    return min;
}