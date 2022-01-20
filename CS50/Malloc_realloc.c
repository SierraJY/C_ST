#include <stdio.h>
#include <stdlib.h> //malloc 과 free를 담고있는 헤더파일. + realloc

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    
    //포인터가 잘 선언되었는지 확인. 컴퓨터가 메모리가 부족해 할당하지 못했으면 포인터변수가 빌 것 이기 떄문에.
    if (list == NULL)
    {
        return 1;

    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;


    int *tmp = realloc(list, 4 * sizeof(int));
    
    if (tmp ==NULL)
    {
        return 1;
    }

    tmp[3] = 4;

    list = tmp;

    for(int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);
    
}