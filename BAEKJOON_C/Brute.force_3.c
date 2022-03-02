#include <stdio.h>
#define small(x,y)x<y?x:y

int main(void)
{
    int row, column;
    scanf("%i %i", &column, &row);

    char square[column][row + 1];

    for (int i = 0; i < column; i ++)
    {
        scanf("%s", square[i]);
    }

    int change_white = 0;  //맨 왼쪽 맨 위 칸을 흰색으로 할 떄 바꾸어야할 칸 수.   행+열이 짝수일 떄인 칸을 모두 흰색으로 한다는 말.
    int change_black = 0;   //맨 왼쪽 맨 위 칸을 검정색으로 할 떄 바꾸어야할 칸 수.
    int min = 64;
    //체스판은 단 두가지 경우의 수 밖에없다.

    for(int j = 0; j < column - 7; j++)
    {
        for(int q = 0; q < row - 7; q++)
        {   change_white = 0;
            change_black = 0;

            for(int x = 0; x < 8; x++)
            {
                for(int y = 0; y<8; y++)
                {
                        if((x+y) % 2 == 0)                     
                        {                                      
                            if(square[j+x][q+y] == 'W')        
                            {                                   //그려서 이해.
                                change_black++;
                            }

                            else
                            {
                                change_white++;
                            }
                        }

                        else
                        {
                            if(square[j+x][q+y] == 'B')       
                            {
                                change_black++;             //square[0][1]이 검정이면 change_white입장에선 맞는 것이고
                            }                                  //change_black입장에선 틀린 것이기 때문에 change_black에 +1.

                            else
                            {
                                change_white++;
                            }
                        }
                }
            }
        min = small(min,change_white);
        min = small(min,change_black);

        }
    }                    
            
    printf("%i", min);
}