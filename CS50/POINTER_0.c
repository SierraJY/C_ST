#include <stdio.h>

int main(void)
{
    char *s = "EMMA";
    printf("%p\n", s);
    
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);

    printf("%s\n", &s[0]);
    printf("%s\n", &s[1]);
    printf("%s\n", &s[2]);
    printf("%s\n", &s[3]);
    printf("%s\n", &s[4]); //종단문자.


    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3)); //그렇다면 *(a+1)은 어떤 값을 나타나게 될까요?? 결론부터 말씀드리면 a[1]의 값을 갖게 됩니다.
    // 어떤 포인터의 +1은 그것이 참조하고 있는 자료형의 크기만큼 주소를 더하라는 의미가 됩니다. 



}