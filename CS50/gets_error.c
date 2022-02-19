#include <stdio.h>

int main(void)
{
    char name[30];

    int age = 0;

    printf("나이를 입력 : ");
    scanf("%i", &age);

    printf("이름을 입력 : ");
    gets(name);

    printf("나이 : %d, 이름 : %s\n", age, name);\
}

//에러가 나는 이유
//scanf함수를 사용할 때 값을 입력한뒤 개행문자를 누르게 되는데 값은 넘어가고 개행문자는 입력버퍼에 남아있게되어
//다음에 gets함수를 사용하는데 버퍼에 남아있는 개행문자를 꺼내오게된다.
//그리고 이 개행문자를 사용자 입력의 끝으로 인식하기 때문에 get함수가 동작하지 않고 넘어가게 되는 것.