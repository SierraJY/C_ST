#include <stdio.h>
#include <stdlib.h> //atoi함수가 선언된 헤더 파일

int main(void)
{
    int n;
    scanf("%i", &n);

    char *numbers = (char *)malloc(n * sizeof(char) + 1);
    scanf("%s", numbers);

    
    
    
    
    
    int sum = 0;
    int i = n;
    while(1)
    {   
        if(i < 0)
        {
            break;
        }
        
        else
        {
            sum += atoi(&numbers[i]); //atoi는 strcmp와 같이 괄호안 부분부터 문자열 끝까지를 int로 변환시킨다.
            numbers[i] = '\0';       // 그래서 문자하나하나를 정수로 변환시키기 위해서 문자열 맨 뒤에서 부터 정수로 변환시키고
        }                              //그부분은 nul로 만들어서 없앴다.

        i--;

        
    }

    printf("%i", sum);
    free(numbers);

    

    system("leaks atoi_0.exe");
}


//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//char *a;
//scanf("%s", a);

//char *b ="hello"
//scanf("%s", b);  

//위의 두가지는 불가능하다.
//위의 a,b에 저장되는 메모리 주소는 쓰기가 아닌 읽기 전용이기 때문.
//그렇기 때문에 읽기 전용이 아닌 메모리 자체를 할당해주면 된다.
//(중요) 포인터 문자열은 수정이 불가능하다. 읽기 전용이다. 따라서, 입력 값을 문자열 포인터에 저장하려면, 
//malloc으로 메모리를 할당 한 뒤에 문자열을 저장하면 된다.



// int 배열과는 달리, 문자열 배열은 선언 즉시 문자열로 초기화 해야한다.( 미리 선언해놓고 나중에 할당하는것이 안된다.) 
// -> 문자를 하나하나 인덱스를 선택하여 집어넣는것은 가능하다. string[1] = "w", string[2] = "a";처럼...