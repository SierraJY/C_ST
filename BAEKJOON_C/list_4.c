#include <stdio.h>

unsigned int max_score(int a, unsigned int subjects_scores[]);
float average(int a, float subjects_scores[]);

int main(void)
{
    int n;
    scanf("%i", &n);

    unsigned int score[n];
    unsigned int score_duplicate[n]; //안좋은 코드의 예) 그냥 max값을 변수로 쓰면....
    float new_score[n];

    for(int i = 0; i <n; i++)
    {
        scanf("%i", &score[i]);
        score_duplicate[i] = score[i];
    }

    for(int i = 0; i < n; i++)
    {
        new_score[i] = (float) score[i] / max_score(n,score_duplicate) * 100;
    }

    printf("%f", average(n,new_score));


}


unsigned int max_score(int a, unsigned int subjects_scores[])
{
    unsigned int max = 0;
    for (int i = 0; i < a; i++)
    {
        if (max < subjects_scores[i])
        {
            max = subjects_scores[i];
        }
    }

    return max;
}

float average(int a, float subjects_scores[])
{
    float average = 0;
    for (int i =0; i < a; i++)
    {
        average += subjects_scores[i];
    }

    average /= a;

    return average;
}