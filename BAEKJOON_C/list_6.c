#include <stdio.h>
//형변환의 중요성....

float case_average(int a, int list[]);

int main(void)
{
    int n ;
    scanf("%i", &n);

    int case_numbers[n];
    float averages[n];
    float percentage[n];
    int more = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%i", &case_numbers[i]);
        
        int case_scores[n][case_numbers[i]];
        for(int j = 0; j < case_numbers[i]; j++)
        {
            scanf("%i", &case_scores[i][j]);
        } 

        averages[i]= case_average(case_numbers[i], case_scores[i]);  //이차원 배열 매개변수사용법2. 함수정의 할떄 배열 크기 선언x하는 방법.
                                                                    // list[a][b]를 매개변수에 list[a]로 적으면 a애 속한 배열만 사용됨.
                                                                    //즉 a행 배열의 첫 주소가 함수로 전달됨. 행과 열로 생각..

                                                                //어차피 배열을 매개변수로 쓸 때는 배열의 이름만 넣어 배열의 시작점(주소)을 전달하는데
        for(int k = 0; k < case_numbers[i]; k++)                //list[a]를 일반 배열로 인식하고 그 주소를 전달하는 듯.
        {                                                       //char list[a][b] ->  char (*list_p)[b]
            if(case_scores[i][k] > averages[i])                //char list[a+1][b] -> char (*list_p + 1)[b]
            {                                                  //
                more ++;
            }
        }
        percentage[i] = ((float)more / case_numbers[i]) * 100; //!! (float)을 안에 적어야 하는이유!!!
        more = 0;                                              // (float)(more / case_numbers[i]) * 100
    }                                                           //이라고 해버리면 두번째 괄호 안이 2/3이지만 형태는 정수형이기 떄문에
                                                                //0이 되어버린다. 그렇기 떄문에 아무리 백을 곱하고 실수형으로 바꿔도 0.0000으로 나올것.
    for(int j = 0; j < n; j++)
    {
        printf("%.3f%%\n", percentage[j]);
    }
    
    //for문 while문안에 선언된 변수는 중괄호 밖에서 사용할 수 없다.
}


float case_average(int a, int list[])
{
    int sum = 0;
    float average = 0;

    for (int i = 0; i < a; i++)
    {
        sum += list[i];
        average = (float) sum / a;
    }


    return average;
}