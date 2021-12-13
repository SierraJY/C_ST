#include <stdio.h>

int main(void){
    char c1 = 'H';  //char 1byte 차지.
    char c2 = 'I';  //char ''사용함.
    char c3 = '!';

    printf("%c %c %c\n", c1, c2, c3);

    printf("%i %i %i\n", (int) c1, (int) c2, (int) c3); //캐스팅 형변환. 메모리에 저장되는 것은 72 73 33의 이진법수 인 것.
    printf("%i %i %i\n", c1, c2, c3);
} 