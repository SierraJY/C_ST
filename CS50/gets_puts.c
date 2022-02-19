//puts함수. c언어 스타일의 문자열인 char *, char[]타입을 표준 출력으로 보내는 함수.
//puts함수가 문자열을 출력을 끝까지 하고나면 개형도 내보냄. 자동으로 줄이 바뀌게 됨.
//puts함수의 매개변수로 들어온 문자열 처음부터 문자열의 끝 \0까지의 문자열을 출력함.

#include <stdio.h>

int main(void)
{
    char str[50];
    for (int i = 0; i < 3; i++)
    {
        printf("input : ");
        gets(str);

        printf("output : ");
        puts(str);

    }
}