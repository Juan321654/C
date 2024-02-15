#include <stdio.h>
#include <stdlib.h>

// you would not want to do this in a real program
// this is just to illustrate how to use malloc and free

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        free(list);
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }

    free(list);

    return 0;
}