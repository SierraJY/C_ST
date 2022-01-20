#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
//argc함수 argv함수 - stdlib헤더
//argc는 명령행 개수(파일명포함!!!!)
//argv는 명령행 메모리 주소 목록(첫번째 문자열은 파일의 실행경로로 고정)
{
    
    int i;


    if (argc == 2){
        printf("명령행 개수 = %d\n", argc);
        printf("hello %s\n", argv[1]);
        for(i = 0; i < argc; i++)
            {
                printf("argv[%d] = %s\n", i, argv[i]);
            }
    }
    else{
        printf("명령행 개수 = %d\n", argc);
        printf("hello, world and %s\n", argv[1]);
        for(i = 0; i < argc; i++)
            {
                printf("argv[%d] = %s\n", i, argv[i]);
            }
    }
}