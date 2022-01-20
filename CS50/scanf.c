#include <stdio.h>

int main(void)
{
    int x;
    printf("x : ");
    scanf("%i", &x); // &을 이용해 입력을 저장하고 싶은 변수의 주소를 적음.
    //scan 형식지정자를 쓰면 그 형식대로 입력을 받음.

    char s[5];
    printf("s : ");
    scanf("%s", s); //문자배열의 이름은 포인터 처럼 다룬다.
    printf("%s\n", s);
    
}