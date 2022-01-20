#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *a1 = "emma";
    int n = strlen(a1);

    char *a2 = malloc(n + 1);
    strcpy(a2, a1); //strcpy

    a2[0] = toupper(a2[0]);

    printf("%s\n",a1);
    printf("%s\n",a2);
}