#include <stdio.h>

int main(void)
{
    int a = 57;

    int* ptr_a = &a; //포인터 prt_a가 가르키는 것이 a의 주소에 있는 것이다.

    printf("%p\n", &a);
    printf("%p\n", ptr_a);

    //여기서 "ptr_a ="로는 포인터 변수의 주소를 바꿀 수 있고
    //"*prt_a = "로는 포인터가 가르키는 대상의 값을 바꿀 수 있다.

}