#include <stdio.h>

int main(void)
{

    int test_n;
    scanf("%i", &test_n);

    int R[test_n];
    char S[test_n][21];

    for (int i = 0; i < test_n; i++)
    {
        scanf("%i", &R[i]);
        scanf("%s", S[i]);

    }


    int q = 0;

    for (int j=0; j <test_n; j++)
    {
        while(S[j][q] != '\0')
        {
            for (int k = 0; k < R[j]; k++)
            {
            printf("%c", S[j][q]);
            }

            q++;
        }

        q = 0;
        printf("\n");
    }

    


}