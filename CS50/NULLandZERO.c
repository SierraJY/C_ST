//NULL은 0주소를 의미함. 포인터 변수를 초기화 할 떄 사용. 널포인터.
//데이터 타입 : pointer (vod *)0 , int 서로 형변환이 가능함.

//pointer가 아무것도 가르키지 않을 때 Null pointer로 초기화 한다.
//char *ptr = NULL 과 char *ptr = 0은 같은 의미.
//그러나 int a = NULL 과 int a = 0 와는 다름.
//전자는 a의 변수에 주소값 0을 넣는 것이고 후자는 정수 0을 넣는 것.
//결론적으로 NULL은 0이랑 의미가 거의 같습니다. 포인터를 초기화 시에 0은 0 주소라는 것을 알고 있다는 가정하에 쓰기 때문에 
//NULL과 0의 의미를 동일하게 보는것입니다. 정수형 변수를 초기화시에 NULL을 쓰는 일은 없으니까요.


//NUL \0은 같다. 아스키고드의 첫문자. 데이터 타입은 char. 문자열은 항상 nul로 끝나야한다.

#include <stdio.h>

int     main(void)
{
        int int_n1 = 0;         // 1. ASCII 0 (decimal)

        char char_n1 = 0;       // 2. ASCII 0 (decimal)
        char char_n2 = '0';     // 3. ASCII 48 (decimal)
        char char_n3 = '\0';    // 4. ASCII 0 (decimal)

        char *char_n4 = 0;      // 5. ASCII 0 (decimal) 
        char *char_n5 = "";     // 6. Empty string
        char *char_n7 = NULL;   // 8. NULL pointer


        printf("====content print====\n");
        printf("content of int_n1  : %d\n", int_n1);
        printf("\n");
        printf("content of char_n1 : %c\n", char_n1);
        printf("content of char_n2 : %c\n", char_n2);
        printf("content of char_n3 : %c\n", char_n3);
        printf("\n");
        printf("content of char_n4 : %s\n", char_n4);
        printf("content of char_n5 : %s\n", char_n5);
        printf("content of char_n7 : %s\n", char_n7);
        return (0);
}