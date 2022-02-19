#include <stdio.h>
#include <math.h>


void hanoi(int from, int to, int blocks, int k);


int main(void)
{
    int n;
    scanf("%i", &n);

    int count = pow(2,n) - 1;
    printf("%i\n", count);
    hanoi(1,2,3,n);


}

void hanoi(int from, int not_pointed_Bar, int to, int x) //x는 맨밑 블록 숫자.
{
    if(x == 1)
    {
        printf("%i %i\n", from, to);
    }

    else
    {
        hanoi(from, to, not_pointed_Bar,x-1);
        printf("%i %i\n",from, to);
        hanoi(not_pointed_Bar, from, to, x-1);
    }
}

//  5번 블록을 옮기기위해 4번 블록까지 몽땅 5번 블록이있는 장대와 5번블록이 가야할 장대를 제외한 곳으로 몽땅 옮긴다.
// 그리고 다시 4번 블록을 5번 블록이 있는 장대로 옮겨야한다.
// 이를 위해 4번 블록을 제외한 3번 블록 까지를 4번 블록이 있는 장대와 4번블록이 가야할 장대를 제외한 곳으로 몽땅 옮긴다.

