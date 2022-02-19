#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *a1 = "emma";
    int n = strlen(a1);

    char *a2 = malloc(n+1); //1은 종단문자.
    //malloc 정해진 크기 만큼 메모리를 할당하는 함수. memory allocation
    //malloc 할당한 메모리의 첫 바이트 주소(포인터)를 돌려줌.

    for (int i =0; i < n; i++)
    {
        a2[i] = a1[i];     //배열과 포인터의 관계 알기

    }

    a2[0] = toupper(a2[0]);

    printf("%s\n",a1);
    printf("%s\n",a2);

    free(a2); //malloc사용 후 해제해주어 메모리 누수를 막아야함.
}