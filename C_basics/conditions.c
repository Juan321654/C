#include <stdio.h>

int main()
{
    int x = 10;
    int y = 20;

    if (x < y)
        printf("x is less than y\n");
    else
        printf("x is greater than or equal to y\n");


    int userNum1;
    int userNum2;

    printf("Type a number and press enter: \n");
    scanf("%d", &userNum1);
    printf("Type another number and press enter: \n");
    scanf("%d", &userNum2);

    if (userNum1 < userNum2)
        printf("The first number is less than the second\n");
    else if (userNum1 > userNum2)
        printf("The first number is greater than the second\n");
    else
        printf("The first number is equal to the second\n");

    return 0;
}