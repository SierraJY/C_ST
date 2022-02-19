#include <stdio.h>

int main(void)
{
    int alphabet[26];
    for (int j =0; j < 26; j++)
    {
        alphabet[j] = -1;
    }

    char s[101];
    scanf("%s", s);

    int howlong = 0;
    int l = 0;
    while(1)
    {
        if(s[l] == '\0')
        {
            break;
        }

        l ++;
    }

    howlong += (l);

    
    
    for (int i = 0; i < 26; i++)
    {
        for (int k = 0; k < howlong; k++) 
        {
            if( (char)(i + 97) == s[k])
            {
                alphabet[i] = k;
                break;
            }
        }
    }
    
    for(int p = 0; p < 26; p++)
    {
        printf("%i ", alphabet[p]);
    }

}