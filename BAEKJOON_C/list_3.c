#include <stdio.h>

int main(void)
{
    int list[10];
    int same=0;
    int result=0;
    
    for(int i = 0; i <10; i++)
    {
        scanf("%i", &list[i]);
    }

    for(int i = 0; i <10; i++)
    {
        list[i] %= 42;
    }

    for(int i =0; i < 10; i++)  // i가 10보다 작을 때 까지 해야함. list[9]전에 list[9]와 같은 수가 있었다고 할지라도
    {                          //그 수는 same++로 걸러지고 나머지들의 집합(!)에 포함되지 못했을 것이기 때문. i가 9일때는 안에for문 작동x.
        for(int j = i+1; j <10; j++)
        {
            if(list[i] == list[j])
            {
                same ++;
            }
        }
        

        if(same == 0)
        {
            result ++;
        }

        same = 0;
    }

    printf("%i", result);

}

//서로 다른 나머지의 개수........ 집합으로 생각....
// ex) 0, 1, 2 -> 3개
// ex) 1, 1, 2 -> 2개