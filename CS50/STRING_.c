#include <stdio.h>
#include <string.h>

int main(void){

    char s[4];
    printf("INTPUT : ");
    scanf("%s", s);
    printf("%c", s[4]);

    for(int i = 0; s[i] != '\0' ;i++){
        printf("%c\n", s[i]);
    }
    printf("\n");

    for(int i = 0; i < strlen(s) ;i++){
        printf("%c\n", s[i]);
    }
}

//  \0는 널 문자. 