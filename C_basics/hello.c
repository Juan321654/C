#include <stdio.h>

int main()
{
    int myNum;
    char name[100]; // Declare name as an array of chars, large enough for the input

    printf("Type a number and press enter: \n");
    scanf("%d", &myNum);

    printf("Type your name and press enter: \n");
    scanf("%s", name);

    printf("You typed: %d\n", myNum);
    printf("Your name is: %s\n", name);

    return 0;
}
