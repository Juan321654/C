#include <stdio.h>

// in the command line you can pass in arguments to the program
// for example, if you run ./greet_cli John, the program will print "Hello, John!"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./greet_cli name\n");
        return 1;
    }
    printf("Hello, %s!\n", argv[1]);
    return 0;
}
