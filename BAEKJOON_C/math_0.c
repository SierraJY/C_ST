#include <stdio.h>

int main(void)
{
    unsigned int cost[3];    // 0:고정비,노트북생산대수와 상관없음 , 1:가변비용  , 2:노트북비용
    
    for(int i = 0; i < 3; i++)
    {
        scanf("%i", &cost[i]);
    }

    int real_venue = cost[2] - cost[1];
    unsigned int break_even_point = 0; //손익분기점

    if(real_venue <= 0)
    {
        printf("%i", -1);
    }


    else
    {
        break_even_point = ( cost[0] / real_venue ) + 1;  //수입 - 가변비용이 어느 순간 고정비만 넘으면 된다. 같으면 안됨.
        
        printf("%i", break_even_point);
    }

}