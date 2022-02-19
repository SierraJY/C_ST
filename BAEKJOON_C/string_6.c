//문자와 문자 비교도 가능하다.

#include <stdio.h>

int main(void)
{
    char string[16];
    scanf("%s", string);
    
    int time[15] = {0,};

    int i = 0;

    while(string[i] != '\0')
    {
        if(string[i] <= 'C')
        {
            time[i] = 3;
        }

        else if(string[i] <= 'F')
        {
            time[i] = 4;
        }

        else if(string[i] <= 'I')
        {
            time[i] = 5;
        }

        else if(string[i] <= 'L')
        {
            time[i] = 6;
        }

        else if(string[i] <= 'O')
        {
            time[i] = 7;
        }

        else if(string[i] <= 'S')
        {
            time[i] = 8;
        }

        else if(string[i] <= 'V')
        {
            time[i] = 9;
        }

        else if(string[i] <= 'Z')
        {
            time[i] = 10;
        }

        i++;
    }

    int time_sum = 0;
    for(int k = 0; k <15; k++)
    {
        time_sum += time[k];
    }

    printf("%i", time_sum);

}