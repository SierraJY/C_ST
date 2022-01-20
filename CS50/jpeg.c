#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        return 1;
    }

    //Open file
    FILE *file = fopen(argv[1], "r"); //FILE이라는 타입으로 file이라는 파일포인터 변수 선언
    //Ensure user ran program with two words at prompt
    if (file == NULL)
    {
        return 1;
    }

    unsigned char bytes[3];
    fread(bytes, 3, 1, file); //배열, 읽을 바이트 수, 읽을 횟수, 읽을 파일
    
    //check if bytes are 0xff 0xd8 0xff
    if(bytes[0]== 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
    {
        printf("Maybe\n");
    }
    else
    {
        printf("No\n");
    }

}