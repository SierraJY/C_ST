//브루트포스 : 무차별 대입 공격. 전수조사. 조합 가능한 모든 문자열을 대입해 보는 방식으로 암호를 해독하는 방식

#include <stdio.h>

int main(void)
{
    int n,m;
    scanf("%d %d", &n, &m);

    int card[n];

    for(int i = 0; i <n; i++)
    {
        scanf("%i", &card[i]);
    }
    
    int compare = 0;
    int max_sum = 0;
    int sum = 0;

    for(int j = 0; j < n-2; j ++)
    {
        for(int q = j+1; q < n-1; q++)
        {   
            for(int k = q+1; k < n; k++)
            {
                sum = card[j] + card[q] + card[k];
                
                if(sum <= m && sum >= compare)
                {
                    max_sum = sum;
                    compare = sum;
                }
            }
        }
    }

    
    printf("%i", max_sum);

    
}