#include<stdio.h>
int main(void)
{
    //read mode로 파일을 생성하고 오픈합니다.
    FILE* pFile = fopen("test.txt", "r");
    
    //문자열을 담을 변수
    char arr[100];
    
    //fgets 함수를 이용해서 파일로 부터 문자열을 가지고 옵니다.
    char* pChar = fgets(arr, 100, pFile);
    printf("fgets return : %s\n", pChar);
    printf("fgets 1sr arg : %s", arr);
        
    //파일 닫기
    fclose(pFile);
    return 0;
}
