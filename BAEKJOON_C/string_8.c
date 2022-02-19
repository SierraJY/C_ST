#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);

    int howmany_groupwords = 0;

    for(int i = 0; i < n; i++) //단어들 한번에 다 받아서 하는 것보다 한번에 하나씩 받아서 판별하는 게 편함.
    {   
        char word[101];
        scanf("%s", word);
        
        int checker = 0; //다음 알파벳이 같지 않을 시 -1로 켜짐. -1로 켜진 상태에서 나중에 같은 알파벳 나오면 그 단어는 그룹 단어가 아님.
        int its_not = 0; //그룹단어가 아니면 -1로.
        
        int k = 0;
        while(word[k] != '\0')       //for(int k = 0; word[k] != '\0' ; k++)
        {   
            int j = k+1;
            while(word[j] != '\0')
            {
                if(word[k] != word[k+1])
                {
                    checker = -1;
                }

                if(checker == -1 && word[k] == word[j])
                {
                    its_not = -1;
                    break;
                }

                j++;
            }

            if(its_not == -1)
            {
                break;
            }

            checker = 0;   //k가 바뀔 때마다 체커는 0으로 초기화. 해야함.
            k++;
        }

    if(its_not != -1)
    {
        howmany_groupwords ++;
    }

    }


    printf("%i", howmany_groupwords);
}