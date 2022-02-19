#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[10] = "HELLO";

    for(int i = 0; i < 10; i++)
    {
        if(strcmp(&a[i], "LO") == 0) //strcmp안에 배열형식을 넣을려면 &필요. 주소가필요함.
        {                              //strcmp는 문자열을 비교하는 것이지 문자 한개를 비교 하는 것이 아니다.
            printf("SAME!!\n");
        }

        else{printf("DIFF!!\n");}
    }
}