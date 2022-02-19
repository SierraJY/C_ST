//아스키코드로 atoi_0풀기

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%i", &n);

    char number[n];
    scanf("%s", number);

    int sum = 0;

    for(int i = 0; i <n; i++)
    {
        sum += number[i] - '0';
    }

    printf("%i", sum);
}

//문자열과 문자열을 빼고 정수형으로 계산한다.
// 문자0의 아스키코드는 48
// 그리고 문자 1 ~ 9 까지 아스키코드는 49 ~ 57

//문자열끼리의 사칙연산