//벌집 최단거리 문제.

#include <stdio.h>

int main(void)
{
    int to_1 = 1;
    int to_last;
    scanf("%i",&to_last);

    int station = 1;
    int i = 1;

    while(station < to_last)        //다음 층 어딜 가든 그 층에 가장 큰수 방에 도착했다 가정.
    {
        station += 6 * i;          //다음 층의 가장 큰수는 매번 6만큼 커지는 것이 아니라 6 * 층 만큼 커짐. (1만 있는 층 제외)
        to_1 ++;
        i++;
    }

    printf("%i", to_1); 

}