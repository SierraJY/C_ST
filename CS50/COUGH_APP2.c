#include <stdio.h>


void cough(int n);


int main(void){

    for(int i = 0; i < 3; i++)
    {
        cough(4); //이제 cought함수는 인수를 받아야함
    }
}

void cough(int n)
{
    for (int i =0; i < n; i+=1)
    printf("cough\n");
}
