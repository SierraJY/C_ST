//fputs 파일에 문자열을 쓰는 함수.
//첫번째 인자 : 파일에 쓸 문자열.
//두번쨰 인자 : 파일의 파일 포인터.
//반환형 : 집어넣은 문자의 수, 문자열의 길이. 보통은 반환형을 0 이상일때는 정상적으로 함수가 작동했고 0보다 작을땐 비정상적으로 함수가 완료되었다. 를 판단 하기위해 사용.

//함수 사용법 간단 버전

#include <stdio.h>


int main(void)
{
    FILE* pFile = fopen("test.txt", "w"); // 파일을 만들고 오픈합니다.

    fputs("blockdamsk",pFile);	// 문자열 'blockdmask’를 만든 파일에 집어 넣습니다.

    fclose(pFile);	// 파일을 닫습니다.

}
