//팩토리얼

#include <stdio.h>

int factorial(unsigned int a);


int main(void)
{
    int n = 0;;
    scanf("%i", &n);

    printf("%i", factorial(n));
}

int factorial(unsigned int a)
{
    
    if(a <= 0)
    {
        return 1;
    }

    else if (a - 1 == 0)  //위에 조건문이 없으면 0이 매개변수일 때 무한루프를 돌게됨.
    {
        return 1;
    }

    else
    {
        a *= factorial(a-1);
    }
    
    
    return a;
}

// int factorial(int n) {
//     if (n > 1)
//         return n * fact(n - 1);
//     else return 1;
// }
