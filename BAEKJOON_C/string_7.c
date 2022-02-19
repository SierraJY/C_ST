#include <stdio.h>

int main(void)
{
    char c_alphabet[100];
    scanf("%s", c_alphabet);

    int howmany = 0;

    int i = 0;
    while(c_alphabet[i] != '\0')
    {
        if(c_alphabet[i] == 'c')
        {
            if(c_alphabet[i+1] == '=' || c_alphabet[i+1] == '-')
            {
                howmany-=1;
            }

        }

        else if(c_alphabet[i] == 'd')
        {
            if(c_alphabet[i+1] == 'z' && c_alphabet[i+2] == '=')
            {
                i += 2;
                
            }

            else if(c_alphabet[i+1] == '-')
            {
                howmany -= 1;
            }
        }

        else if(c_alphabet[i] == 'l')
        {
            if(c_alphabet[i+1] == 'j')
            {
                howmany -=1;
            }
        }

        else if(c_alphabet[i] == 'n')
        {
            if(c_alphabet[i+1] == 'j')
            {
                howmany -=1;
            }
        }

        else if(c_alphabet[i] == 's')
        {
            if(c_alphabet[i+1] == '=')
            {
                howmany -=1;
            }
        }

        else if(c_alphabet[i] == 'z')
        {
            if(c_alphabet[i+1] == '=')
            {
                howmany -=1;
            }
        }

        howmany ++;
        i ++;
    }

    printf("%i", howmany);

}