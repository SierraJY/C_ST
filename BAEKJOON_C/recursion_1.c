//피보나치

#include <stdio.h>


int fibonacci(int n);

int main(void)
{
    int k;
    scanf("%i", &k);

    printf("%i", fibonacci(k));
}

int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }

    else if ( n == 1)
    {
        return 1;
    }

    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }

}