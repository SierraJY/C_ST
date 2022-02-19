#include <stdio.h>

int main(void)
{
    int a,b;


    while(1)
    {
        

        if(scanf("%i %i", &a, &b) != EOF)
        {
            printf("%i\n", a+b);
        }

        else
        {
            break;
        }
    }
}

//EOF란 파일의 끝을 표현하기위한 메크로 상수. c에선 항상 -1을 반환한다.
//콘솔에선 eof를 ctrl + z로 인식함.
//EOF는 C언어에서는 -1로 정의되어 있지만, 프로그램을 실행하면 ctrl+Z (실행취소 단축키)로 값이 정해져 있습니다.

//맥에선 ctrl + d