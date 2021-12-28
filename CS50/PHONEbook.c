#include <stdio.h>
#include <string.h>

typedef struct
{
    char* name;
    char* phonenumbers;
}
person; //새로운 자료형으로 구조체정의.

int main(void)
{
    person people[4];
    
    people[0].name = "EMMA";
    people[0].phonenumbers = "111-111";

    people[1].name = "RODRIGO";
    people[1].phonenumbers = "222-222";

    people[2].name = "BRIAN";
    people[2].phonenumbers = "333-333";
    
    people[3].name = "DAVID";
    people[3].phonenumbers = "444-444";

    for (int i = 0; i < 4; i++)
    {
        if(strcmp(people[i].name, "EMMA") == 0)
            {
                printf("%s\n", people[i].phonenumbers);
                return 0;
            }
    }
    printf("Not found\n");
    return 1;
}