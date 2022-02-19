#include <stdio.h>

int main(void)
{
    int a,b,c;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    long long total = (a * b *c);
    long long total_c = total;

    int count[10] = {0,0,0,0,0,0,0,0,0,0}; // 0~9까지 각 숫자 개수
    int howlong = 0; //몇자리 수인지
    int divide = 10;


    //몇자리 수인지 알아냄.
    while(1)
    {
        if((total / divide) >= 1 && (total / divide) < 10)
        {
            howlong += 1;
            break;
        }
        else
        {
            howlong +=1;   
        }
        divide *= 10;
    }
    howlong += 1;

    
    int divide2 = 10;
    

    //이제 자리 마다 숫자들 분리
    int numbers[howlong]; 
    for(int i = 0; i < howlong; i++)
    {   
        if( i == (howlong-1))
        {
            numbers[i] = (total / (divide2/10));
        }

        else
        {
            int dividend = (total % divide2);
            if(dividend == 0)
            {
                numbers[i] = 0;
            }
            else
            {
                numbers[i] = (dividend * 10) / divide2;
            }
        }

        divide2 *= 10;
    }


    //count배열에 이제 각 숫자 개수를 넣음.
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < howlong; j++)
        {
            if( i == numbers[j])
            {
                count[i] += 1;
            }
        }
        
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%i\n", count[i]);
    }
}


//몇 자리수인지 더 쉽게 알아내는법..
// while (1) 
//  {
// 		mul = mul / 10;
// 		N++;
// 		if (mul == 0)break;
// 	}