#include <stdio.h>

int main(void){

    // string names[4];
    // names[0] = "EMMA";
    // names[1] = "RODRIGO";
    // names[2] = "BRIAN";
    // names[3] = "DAVID";
    // C언어에서 위와 같이 문자열 스트링을 쓸 수 없다.
    // printf("%s\n", names[0]);

    char names1[]= "EMMA";
    char names2[]= "RODIRGO";
    char names3[] = "BRIAN";
    char names4[] = "DAVID";

    printf("%s\n",names1);

    char *names[4];
    names[0] = "emma";
    names[1] = "rodrigo";
    names[2] = "brian";
    names[3] = "david";

    printf("%s\n", names[0]);
    printf("%s\n", names[1]);
    printf("%s\n", names[2]);
    printf("%s\n", names[3]);
    //포인터

}