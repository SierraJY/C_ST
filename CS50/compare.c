#include <stdio.h>

int main (void)
{
    // char *a;
    // printf("a = ");
    // scanf("%s", a);
    // printf("%s\n", a);
    //포인터는 읽기 전용이기 때문에 위와 같이 쓰기는 불가.

    char *A_1 = "PARK";
    char *A_2 = "Paaa"; //단점 첫번쨰 글자가 같으면 같은 것으로 취급.

    if (*A_1 == *A_2)
    {
        printf("SAME");
    }
    else
    {
        printf("DIFFRENT");
    }

    
}

// #include <stdio.h>
// int main(void)
// {
// char* a = get_string("a: ");
// char* b = get_string("b: ");
// if (*a == *b)
// {
// printf("Same\n");
// }
// else
// {
// printf("Different\n");
// }
// }