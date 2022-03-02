#include <stdio.h>


int main(void)
{
    int n;
    scanf("%i", &n);
    
    int kg[n];
    int cm[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%i %i", &cm[i], &kg[i]);
    }

    for(int j = 0; j < n; j++)  //등수는 일대일 비교 이중for문.
    {
        int upper = 0;
        int equal = 0;
        int lower = 0;
        for(int q = 0; q < n; q++)
        {
            if( j == q)
            {
                continue;
            }
            else if((kg[j] > kg[q] && cm[j] > cm[q]) || (kg[j] > kg[q] && cm[j] > cm[q]))
            {
                lower += 1;
            }

            else if((kg[j] < kg[q] && cm[j] < cm[q] ) || (kg[j] < kg[q] && cm[j] < cm[q]))
            {
                upper += 1;
            }

            else
            {
                equal += 1;
            }
        }

        int rank = n - lower - equal;
        printf("%i ", rank);
    }
}