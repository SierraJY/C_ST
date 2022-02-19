#include <stdio.h>
//n개의 정수가 주어졌을 때 n개의 합을 구하는 함수.
// a = 합을 구해야하는 정수 n개 저장되어 있는 배열.

int sum_n(int a[],int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    return sum;
}