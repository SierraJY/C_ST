//한수란 어떤 양의 정수 x의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 함.
//1자리 수와 2자리 수는 등차를 비교할 수 없기 떄문에 모두 한수로 인정함.


#include <stdio.h>
#include <stdlib.h>


int find_hansoo(int a);

int main(void)
{
    unsigned int hansoo = 0;
    
    unsigned int n;
    scanf("%i", &n);
    
    if(n > 110)
    {
        hansoo += 99;
        for (int i = 110; i <= n; i++)
        {
            hansoo += find_hansoo(i);
        }
    }

    else
    {
        if(n < 100)
        {
        hansoo += (n);
        
        }

        else
        {
            hansoo = 99;
        }
    }

    printf("%i", hansoo);    
}

int find_hansoo(int a)   //한수판별하는 함수.. 한수면 1반환.
{
    int a_0 = a;
    int a_1 = a;
    int howlong = 0;
    int is_hansoo = 0;

    while(a_0 > 0)          //자릿수 구하기
    {
        a_0 /= 10;
        howlong ++;
    }

    int *number_s;        //자리수 마다 숫자들 따로 두기.(숫자가 뒤집혀 들어가지만 등차수열 구하는데 문제 없음)
    number_s = (int *) malloc(howlong * (sizeof(int)));
    
    int i =0;
    while(a_1 > 0)
    {
        number_s[i] = (a_1 % 10);
        a_1 /= 10;
        i++;
    }

    int *difference;  // 따뤄 두어진 숫자들을 앞수와 뒷수의 차를 구해 따로 배열에 넣음. 이 배열의 크기는 원래수의 자리수 - 1 (공차들의 배열)
    difference = (int *) malloc((howlong - 1) * (sizeof(int)));
    for(int t = 0; t < howlong - 1; t++)
    {
        difference[t] = (number_s[t] - number_s[t+1]); 
    }

    int check = 0;
    
    for(int q = 0; q < howlong - 2; q++)     // 공차인지 아닌지 판단. 확인 횟수는 원래수의 자리수 -2.
    {
        if(difference[q] == difference[q+1])
        {
            check ++;
        }
    }

    if(check == howlong - 2) //모든 차가 공차였는지 확인.
    {
        is_hansoo ++;
    }

    free(number_s);
    free(difference);

    return is_hansoo;
}