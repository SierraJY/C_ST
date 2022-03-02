#include <stdio.h>

int main(void)
{
    FILE *txtfile = fopen("fgets_test.txt", "r");
    if (txtfile == NULL)
    {
        return 0;
    }

    char txt[100];
    
    while(1)
    {
        
        char *txt_one = fgets(txt, 100, txtfile);

        if (txt_one == NULL)  //fgets는 개행문자 입력이 구분됨.
        {
            break;
        }

        int position = ftell(txtfile);

        printf("text : %s\n",txt);
        printf("현재 커서 위치 : %i\n", position);

    }

    fclose(txtfile);
}

//  fgets는 개행문자'까지' 복사한다. 마지막이 \n인 것.
//   buffer에 개행 문자를 남기지 않고 전부 가져옴으로써 버퍼를 비우는 수고를 덜 수 있다.
//   하지만 문자열의 끝이 널문자가 아니라 개행 문자라는 것을 주의해야 한다.
//   str[strlen[str] - 1] = '\0'; 을 통해 널문자로 바꿀 수 있다.