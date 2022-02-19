#include <stdio.h>
//이중 for문을 쓸 것인지 함수를 만들어쓸것인지 본질은 똑같음.

int ox_score(int numbering,char oxs[][80]);

int main(void)
{
    int n;
    scanf("%i", &n);

    char ox[n][80];

    for(int i =0; i < n; i++)
    {
        scanf("%s", ox[i]);
    }


    for(int i =0; i<n; i++)
    {
        printf("%i\n", ox_score(i, ox));
    }
}

int ox_score(int numbering,char oxs[][80])  //이차원배열을 함수의 매개변수로 사용하는 방법1. 오른쪽 대괄호에 크기를 선언.
{
    int score =0;
    int plus = 0;
    int j = 0;
    
    while(oxs[numbering][j] != '\0')      //strcmp는 문!자열 비교 함수임. strcmp를 써버리면 oxs[numbering][j]부터 종단문자 전까지
    {                                       //와 '\0' 및 'O' 'X'와 비교할 것임....
        if(oxs[numbering][j] == 'O')
        {
            score += 1;
            score += plus;
            plus += 1;
        }

        else
        {
            plus = 0;
        }

        j+=1;
    }

    return score;
}
