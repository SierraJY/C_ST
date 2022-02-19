//쉐도우 코딩.
//백준 1193

#include <stdio.h>

int main(void)
{
    int x;
    scanf("%i", &x);
    if(x == 1)  //x가 1일 떄는 바로 출력.
    {
        printf("%i/%i", 1,1);
        return 0;
    }

    int floor = 1;             // 다음 층에 블록이 하나 씩 증가하는 탑에서 x번 째 블록은 몇층에 있는 지 구하기랑 같음.
    int floor_checker = 1;
    int i = 2;

    while(x > floor_checker)
    {
        floor_checker += i;
        i++;
        floor ++;
    }

    
    int j = 2;  //j는 해당 대각선 라인에 숫자 개수. 
    int number = 2; //x와 같은지를 판독하는 변수.

    while(1)
    {   
        int num1 = 1; //대각선 라인에서 해당 숫자가 몇번 째에 있는지.
        for(int k = j; k > 0; k--)
        {
            if(x == number)
            {
                if(floor % 2 == 0)
                {
                    printf("%i/%i", num1, k);
                }

                else
                {
                    printf("%i/%i", k, num1);
                }
                return 0;

            }

            number++;
            num1 ++;
        }
        j ++; //항상 다음 대각선 라인에 숫자 개수는 전 대각선 라인 + 1.
    }
}