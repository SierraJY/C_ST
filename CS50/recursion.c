#include <stdio.h>


void draw(int h);


int main(void)
{
    int height;
    printf("height = ");
    scanf("%d", &height);

    draw(height);
}

void draw(int h)
{
    if(h == 0)
    {
        return;
    }

    draw(h-1); //재귀호출  재귀(recursion)

    for (int i =0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}