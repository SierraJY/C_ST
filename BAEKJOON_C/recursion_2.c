
//별 찍기

#include <stdio.h>
#include <string.h>


char fractal[2201][2201];

void star(int y, int x, int num)
{
    if(num == 1)  //더 이상 3으로 나누어 지지 않을 때 그린다.
    {
        fractal[y][x] = '*';
        return;
    }

    int inner = num / 3;
    for(int i = 0; i < 3; i++)       // 크게 보면 3*3으로 그리기 때문에 이중for문.
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == 1 && j == 1)
            ;

            else
            {
                star(y + (i * inner), x+(j*inner), inner);    //그릴 시작점이 필요.그렇기 때문에 왼쪽 위 꼭지점 좌표를 매개변수로 쓴다.
            }                                             //전 함수와 연결 점이 있어야함.
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    memset(fractal, ' ', sizeof(fractal));
    
    star(0, 0, n);
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < n; j ++)
        {
            printf("%c", fractal[i][j]);
        }

        printf("\n");
    }
}