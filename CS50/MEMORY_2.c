#include <stdio.h>

int main(void)
{
    int *x;
    int *y;

    x = malloc(sizeof(int)); //malloc은 메모리를 할당하고 그 첫번쨰 주소를 반환 한다. 그렇기 때문에 x에는 주소가 들어가게 되고 포인터로서 그곳을 가르키게 된다.

    *x = 42;
    //*y = 13;                 포인터y는 어디를 가르킬 지 정의가 되어있지 않다. 초기화 되지않은 *y는 무엇을 가르키는지 정확히 알 수 없어 오류를 일으킬 수 있다.
}