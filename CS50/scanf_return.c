#include <stdio.h>

int main(void)
{
    int n,m,a,b;

    a = scanf("%d", &n);
    b = scanf("%d %d", &n, &m);

    printf("%i %i", a, b);

    
}

//scanf함수의 반환 값은 포맷 형식의 개수. 정확히는 포햇 형식에 알맞는 입력이 들어온 개수. 정수형에 문자를 입력하면 개수가
//늘어지지 않음.
//뿐만아니라 scanf는 eof값도 반환한다. 콘솔창에서 윈도우 계열은 컨트롤 제트, 유닉스게열은 컨트롤 디를 통해 eof가 입력됨. 이 경우에는 반환 값으로 eof(-1)이가 나오게 됨.