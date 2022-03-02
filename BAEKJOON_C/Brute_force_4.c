#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%i", &n);

    int *number_666 = malloc(sizeof(int) * n);
    
    
    number_666[0] = 666;
    int k;

    for(int i = 1; i < n; i++)
    {   int back_num = number_666[i-1] + 1;
        int check = 0;                          //변수 check의 위치 중요.
        for(int j = back_num; check < 3; j++)
        {   
            check = 0;
            int h = j;
            while(h > 0)
            {   
                if(check == 3)
                {
                    break;
                }

                else if(h % 10 == 6) 
                {
                    check ++;
                }

                else
                {
                    check = 0;
                }

                h /= 10;
            }
            k = j;
        }
        number_666[i] = k;
    }

    printf("%i", number_666[n-1]);



    free(number_666);
}

		// while (temp != 0)
		// {
		// 	if (temp % 1000 == 666) // 종말의 숫자라면
		// 	{
		// 		cnt++;
		// 		break;
		// 	}
		// 	else temp /= 10; // 일의 자리수 삭제
		// }