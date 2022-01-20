#include <stdio.h>
#include <string.h>

int main (void)
{
    char *a1 = "PARK";
    char *a2 = "aarK";

    int checknum = 0;

    for (int i = 0; i < strlen(a1); i++ )
    {
        if(*(a1+i) == *(a2+i))
        {
            checknum += 1;
        }
        else
        {
            printf("Not same\n");
            return 1;
        }
    }

    if (checknum == strlen(a1))
    {
        printf("same\n");
    }
    else 
    {
        printf("Not same\n");
    }
    
}