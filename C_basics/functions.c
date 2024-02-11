#include <stdio.h>

void meow(void); // Function prototype, or function declaration (also called a function signature)
// This tells the compiler that there is a function and won't complain about it not being defined yet
void woof(int n);

int main()
{
    for (int i = 0; i < 10; i++)
    {
        meow();
    }

    woof(5);

    return 0;
}

void meow(void)
{
    printf("meow\n");
}

void woof(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("woof\n");
    }
}