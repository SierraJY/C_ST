#include <stdio.h>

int main(void)
{
    char list[4][5] = {"aaaa", "bbbb", "cccc", "dddd"};

    for(int i =0; i < 4; i++)
    {
        printf("%s\n",list[i]);      //list[i]를 주소를 담고 있는 변수로 생각하나봄. 즉 포인터.
    }
}