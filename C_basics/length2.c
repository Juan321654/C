#include <stdio.h>
#include <string.h>

int main(void)
{
    // get the user input name and then use the strlen function to get the length of the string

    char name[100];
    printf("Enter your name: ");
    scanf("%99s", name);
    printf("The length of your name is: %lu\n", strlen(name));
    return 0;
}