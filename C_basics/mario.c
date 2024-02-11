#include <stdio.h>

void grid(int n, int n2);

int main(void) 
{
    grid(3, 4);
    return 0;
}

void grid(int n, int n2)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}