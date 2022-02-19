#include <stdio.h>

int main(void)
{
    char str[1000001];
    fgets(str, 1000001, stdin);   //fgets는 개행문자를 기준으로 입력을 가져옴.(또는 두번째 매개변수에 넣은 크기만큼.)

    int space = 0;
    int i = 0;
    
    while(str[i] != '\0')
    {
        if( (int)str[i] == 32)    //스페이스의 아스키코드는 32.
        {
            space += 1;

        }
        
        i++;
    }

    if((int)str[0] == 32)
    {
        space -= 1;
    }

    if((int)str[i-2] == 32)
    {
        space -= 1;
    }

    printf("%i", space + 1);
}

//fgets 함수는 파일에서만 문자열을 읽을 수 있는가??
//아니다. 표준 입력을 의미하는 stdin 변수가 FILE *형식으로 되어 있기 때문에 fgets의 세번쨰 인자에 stdin을 적으면 표준입력을
//통해서도 문자열을 입력받을 수 있다.

//scanf("%[^\n]",arr); // ["%^\n"]은 엔터가 나올때까지 문자열로 받는다는 말이다( 공백도 포함 )