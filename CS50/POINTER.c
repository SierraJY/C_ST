#include <stdio.h>

int main(void)
{
    //c언어에서 포인터란 메모리의 주소값을 저장하는 변수이며, 포인터변수라고도 부른다.
    
    
    char str1[] = "my string"; //문자열 내용을 변경할 수 있다. 그러나 변수가 가리키는 주소값 자체는 변경할 수 없다.
    //str1[0] = 'x' 가능


    char* str2 = "my string"; //메모리 공간에 문자열을 저장하고 문자열의 첫번째 문자의 주소값을 반환 후
                             //그 값을 포인터 변수 str2에 저장한다. 이 경웨는 문자열 내용을 변경 할 수 없다.
                             //그러나 포인터가 가리키는 주소값 자체는 변경할 수 있다.
    //str2[0] = 'x' 불가능
    //str2 = "our string" 포인터 가르키는 대상 변경 가능. = 주소값 자체 변경.
    printf("%p   %p  \n", str1, str2);

    str1[0] = 'x';
    str2 = "our string";

    printf("%p   %p", str1, str2);

}