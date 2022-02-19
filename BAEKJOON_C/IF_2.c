//설정 시간보다 45분 일찍 꺠우는 알람시계

#include <stdio.h>

int main(void)
{
    int h,m;
    scanf("%i %i", &h, &m);

    int m_info;
    if(m < 45)
    {
        m = 60 - (45 - m);
        if (h == 0)
        {
            h = 23;
        }
        else
        {
            h = h -1;
        }
    }
    
    
    else
    {
        m = m -45;
    }

            printf("%i %i", h, m);
}