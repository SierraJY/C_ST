#include <stdio.h>

int main(void)
{
    int list[9];
    int max;
    int check =1; //체크를 그냥 두면 첫번 쨰 수가 가장클때 몇번쨰 수인지 알려주는 체크는 정의되어 있지않음.

    for(int i = 0; i < 9; i++)
    {
        scanf("%i", &list[i]);

        if(i == 0)
        {
            max = list[0];

        }

        if(max < list[i])
        {
            max = list[i];
            check = i+1;
        }
        
    }

    printf("%i\n", max);
    printf("%i", check);


}