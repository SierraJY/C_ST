#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[10];
    printf("Before : ");
    scanf("%s", s);
    printf("After1 : ");
    
    int n = strlen(s);
    
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            //convert to uppercase
            printf("%c", (int) s[i] - 32);
        }

        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
    printf("After2 : ");

    for (int i = 0; i < n; i++)
    {
        if (islower(s[i]))
        {
            //convert to uppercase
            printf("%c", toupper(s[i]));
        }

        else if (isupper(s[i]))
        {
            printf("%c", tolower(s[i]));
        }
    }

}
//acciichart.com 대문자에 32를 더하면 소문자가 됨.
//후에 islower, lsupper/ ctype라이브러리의 tolower, toupper로 간단히 할 수 있음.