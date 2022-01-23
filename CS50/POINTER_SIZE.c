#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num_1 = 99;
    printf("size of num_1 = %lu\n", sizeof(num_1));

    int *num_ptr = &num_1;
    printf("size of pointer num_1 = %lu\n", sizeof(num_ptr));
}

//sizeof(int *),sizeof(double *) 모두 값이 똑같습니다. 주소값 자체는 포인터가 가르키고 있는 실제 변수 크기와 전혀 상관 없습니다. 