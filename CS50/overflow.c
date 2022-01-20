#include <stdio.h>
#include <unistd.h>

int main(void)
{
    for (int i = 1; ;i *= 2)
        {
            printf("%i\n",i);
            sleep(1);

            if (i <= 0)
            {
                printf("Finish 오버플로우 비정상 종료");
                return 1;
            }
        }
}