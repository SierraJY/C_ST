//c언어 삼항 연산자.


#include <stdio.h>

int main(void)
{
    int num1 = 5;
    int num2;

    if (num1)          // num1이 참이면 
        num2 = 100;    // num2에 100을 할당
    else               // num1이 거짓이면
        num2 = 200;    // num2에 200을 할당
 
    printf("%d\n", num2); // 100: num1이 5이므로 참. num2에는 100이 할당됨
 
    return 0;    //num1에 저장된 5는 0이 아닌 값이므로 참임.
}


// 변수 ? 값1 : 값2
//위의 코드를 바탕으로

//num2 = num1 ? 100 : 200;
//num1이 참이면 num2에 100을 할당, 거짓이면 200을 할당.

//즉    참/거짓을 판단할 것 ? 참일 때 사용할 값 : 거짓일 때 사용할 값;
//    물음표 앞에 비교 연산자로 조건식을 지정해도 됨.
//ex    num2 = (num1 == 10) ? 100 : 200;


//삼항 연산자는 가독서을 해침. 