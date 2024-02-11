#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 10)
    {
        printf("Counter is at %d\n", i);
        i += 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Counter is at %d\n", i);
    }
}