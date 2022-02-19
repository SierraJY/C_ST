#include <stdio.h>

int main(void)
{
    int a,b;
    scanf("%i", &a);
    scanf("%i", &b);
    
    printf("%.9lf", (double)a/b);  //float 소수점 6자리까지, double소수점15자리까지. 소수점을 사용하고 싶다면 나누는 숫자 중 하나라도 실수여야...
    //형식지정자 %lf는 더블형 형식지정자, 소수점 9자리까지.
    //(double)(a/b)를 해버리면 실수로 변환하기 전에 정수인 상태에서 먼저 나눗셈을 해버려서 소수점이 사라짐.
}