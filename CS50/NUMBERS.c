#include <stdio.h>
#include <string.h>


int main(void)
{
    int numbers[6] = {4, 8, 15, 16, 23, 42};

    for (int i = 0; i < 6; i++)
    {
        if(numbers[i] == 50)
        {
            printf("Found\n");
        }
        else
            {
                printf("Not found\n");
            }
    }
    

    char* names[4] = {"EMMA", "RODIRIGO", "BRIAN", "DAVID"};

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(names[i], "EMMA") == 0)
            {
                printf("Found\n");
            }

        else
        {
            printf("Not found\n");
        }
    }
} // Found만 출력하고 싶으면 return이용.