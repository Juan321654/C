#include <stdio.h>

int main(void)
{
    // white space id ignored when declaring a pointer, could be (int* p) or (int *p) or (int * p)
    int n = 50;
    int *p = &n; // *p is a pointer being created  // &n is the address of n
    // printf("Address of n: %p\n", &n);  // this is the same as the next line
    printf("Address of n: %p\n", p); // %p is the format specifier for pointers
    printf("Value of n: %i\n", *p); // *p here means "go to this address/location and get the value there"


    char *word = "Hello";
    printf("%c", *word); // prints H
    printf("%c", *(word + 1)); // prints e
    printf("%c", *(word + 2)); // prints l
    printf("%c", *(word + 3)); // prints l
    printf("%c", *(word + 4)); // prints o

    // word[0] is equivalent to *word and word[1] is equivalent to *(word + 1) and so on
    printf("%c", word[0]); // prints H
    printf("%c", word[1]); // prints e
    printf("%c", word[2]); // prints l
    printf("%c", word[3]); // prints l

    // word[0] is syntactic sugar for *(word + 0)

    return 0;
}