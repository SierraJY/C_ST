//가장 많이 사용된 알파벳을 대문자로 출력. 2개이상이면 ?출력

#include <stdio.h>

int main(void)
{
    int alphabet[26] = {0,};

    char word[1000000];
    scanf("%s", word);

    int i = 0;
    while(word[i] != '\0')
    {
        int ascii = (int)word[i];     //대소문자 구분하지않고 각 알파벳 개수 구하기.
        
        if(  ascii >= 97 )  //소문자
        {
            alphabet[ascii - 97] += 1;    //ascii - 'a' 로 해도 됨.
        }

        else        //대문자
        {
            alphabet[ascii - 65] += 1;   //ascii - 'A' 로 해도 됨.
        }

        i++;
    }


    int max = 0;       //가장많이 사용된 알파벳 구하기
    int max_alphabet_num = 0;
    for ( int j = 0; j < 26; j++)
    {
        if(alphabet[j] > max)
        {
            max_alphabet_num = j;
            max = alphabet[j];  
        }
    }

    int check = 0;      //가장많이 사용된 알파벳과 같은 횟수로 사용된 다른 알파벳 있는지 확인.
    for ( int k = 0; k <26; k++)
    {
        if( max == alphabet[k] )
        {
            check ++;
        }
    }

    if(check >= 2)
    {
        printf("?");
        return 0;
    }

    else
    {
        printf("%c", (char)(max_alphabet_num + 65));
    }
    
}