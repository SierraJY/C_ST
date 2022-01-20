#include <stdio.h>
#include <stdlib.h> //malloc 과 free를 담고있는 헤더파일.

int main(void)
{
    int *list = malloc(3 * sizeof(int)); //일반적인 배열선언과 이 라인의 차이.  동적할당?
    
    //포인터가 잘 선언되었는지 확인. 컴퓨터가 메모리가 부족해 할당하지 못했으면 포인터변수가 빌 것 이기 떄문에.
    if (list == NULL)
    {
        return 1;

    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;


    int *tmp = malloc(4 *sizeof(int));
    
    if (tmp ==NULL)
    {
        return 1;
    }

    for (int i =0; i <3; i++)
    {
        tmp[i] = list[i];
    }

    tmp[3] = 4;
    
    free(list);

    //list가 tmp와 같은 곳을 가리키도록 지정.
    list = tmp; //free(tmp)를 안해도 되게 됨.
    
    
    

    for(int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);
    
}