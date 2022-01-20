#include <stdio.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");

    char name[8];
    char number[8];

    printf("NAME : ");
    scanf("%s", name);
    printf("NUMBER : ");
    scanf("%s", number);

    fprintf(file, "%s,%s\n", name, number);
    
    fclose(file);

}