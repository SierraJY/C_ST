#include <stdio.h>


void cough(void); //main함수가 맨위에 있고 함수 정의는 밑에 있는 것이 코딩에 있어 깔끔함.


int main(void){

    for(int i = 0; i < 3; i++)
    {
        cough();
    }
}

void cough(void)
{
    printf("cough\n");
}