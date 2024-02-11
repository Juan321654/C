#include <stdio.h>

int main(void) 
{
    int num1;
    int num2;
    char operation;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the operation: ");
    scanf(" %c", &operation);

    if (operation == '+')
    {
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
    }
    else if (operation == '-')
    {
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
    }
    else if (operation == '*')
    {
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
    }
    else if (operation == '/')
    {
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
    }
    else
    {
        printf("Invalid operation\n");
    }

    return 0;
}