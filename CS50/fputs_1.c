#include<stdio.h>
int main(void)
{
    //write mode로 파일을 생성하고 오픈합니다.
    FILE* pFile = fopen("test.txt", "w");
    
    //fputs 함수를 통해서 문자열을 집어넣습니다.
    int len = fputs("blockdmask",pFile);  //반환형은 집어넣은 문자의 수.
    printf("fputs return : %d", len);
        
    //파일 닫기
    fclose(pFile);
    return 0;
}