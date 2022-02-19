//gets함수는 포인터나 배열만 넣어주면 끝이라서 버퍼의 크기를 넘어서는 입력도 받을 수가 있었다. 그렇기 때문에 지속적으로 오버플로우 공격에 시달림.
#include <stdio.h>

int main(void)
{
    char buffer[100];

    //gets_s(buffer,sizeof(buffer));
   //gcc에는 gets_s가 없다...
    puts(buffer);
}
