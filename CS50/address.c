#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%p\n", &n); // & "~의 주소"를 의미하는 연산자 *는 그반대
    
    int *p = &n; //주소는 포인터에 저장
    printf("%p\n", p);
    printf("%i\n", *p);
    //Hxadecimal은 앞에 0x를 붙인다.
}