#include <stdio.h>

void row_print(int n);

void main()
{
    int count;

    printf("Enter the height of the pyramid: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        row_print(i);
    }
}

void row_print(int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("#");
    }
    printf("\n");
}