#include <stdio.h>

int main(void)
{
    char *s = "EMMA";
    printf("%p\n", s);
    
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);

    printf("%s\n", &s[0]);
    printf("%s\n", &s[1]);
    printf("%s\n", &s[2]);
    printf("%s\n", &s[3]);
    printf("%s\n", &s[4]); //종단문자.


    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3));



}