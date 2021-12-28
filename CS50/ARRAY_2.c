#include <stdio.h>

float average(int length, int array[]);

int main(void){

    int n; 
    printf("Number of scores : ");
    scanf("%d", &n);
    
    int scores[n];

    for (int i = 0; i <n; i++)
    {
        printf("Score %d: ", i +1);
        scanf("%d",&scores[i]);
    }

    printf("Average : %f\n", average(n,scores));

    return 0;

}

float average(int length, int array[]){
    
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += array[i];
    }

    return (float)sum / (float)length;  // int와 int를 나누면 정수 플롯과 플롯을 나누면 플롯
}