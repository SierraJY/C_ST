#include <stdio.h>

#define glue(a,b) a ## b
#define str_glue(a,b) #a#b
#define jy x ## 1998
#define ap nasdaq ## one
#define x1998 printf("jy 출생년도입니다\n")
#define nasdaqone printf("애플 시가총액 순위\n")


int main(void)
{
    glue(j,y);
    glue(a,p);

    // char p,q;
    // scanf("%c %c", &p, &q);   
    // glue(p,q);
    //불가 매크로는 치환만 한다.

    printf("%s", str_glue(lo,ve));
}