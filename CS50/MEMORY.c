#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;


    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);

}

void swap(int *a, int *b) // x,y의 주소를 int *a, int *b에 복사해 넣음.
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    //포인터의 개념을 (그림)추상화해서 잘 기억하기.
}


// 힙 : 우리가 메모리를 할당받을 수 있는 영역
// 힙은 사용하면 할 수로 아래로 내려감.
// 스택 : 함수의 지역변수들이 저장되는 곳
// 힙은 malloc이 메모리를 할당하는 곳이고, 스택은 함수가 호출될 때 지역변수가 쌓이는 공간.