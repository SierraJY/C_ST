#include <stdio.h>

int main(void)
{
    char s1[10] ="abab";

    scanf("%s", s1);

    printf("%s\n", s1);


    int n;
    scanf("%i", &n);

    char s2[n];
    scanf("%s", s2);
    printf("%s", s2);
}

//배열로 문자열을 사용할 때는 무조건 배열을 선언한 즉시 문자열로 초기화해야 한다. 
// 이미 선언한 배열에는 문자열을 할당할 수 없으며 정 할당하고 싶으면 요소에 문자 하나 하나를 넣으면 된다.

//아마 scanf로 문자열 배열에 못넣는 것이 아니라
//char s1[10] ="cdcd"를 못한다는 말인 듯.

