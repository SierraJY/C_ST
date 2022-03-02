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
    
    int composition = ((n * (n-1) * (n-2)) / (3 * 2 * 1));  //가능한 3수의 모든 조합을 배열에 저장해둠.
    int sums[composition];   
    int com = 0;
    int max_sum = 0;


    for(int j = 0; j < n-2; j ++)
    {
        for(int q = j+1; q < n-1; q++)
        {   
            for(int k = q+1; k < n; k++)
            {
                int sum = card[j] + card[q] + card[k];
                sums[com] = sum;
                com += 1;
                
            }
        }
    }

    
    for(int t = 0; t < composition; t++)
    {
        if(sums[t] <= m && max_sum < sums[t])
        {
            max_sum = sums[t];
        }
    }

    printf("%i", max_sum);
    
}