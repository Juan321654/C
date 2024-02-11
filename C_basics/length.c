#include <stdio.h>

// in C, the NUL character is represented by '\0'
// \0 is a null character, which is used to terminate a string in C
// this is in every string you use in C

// NUL is not the same as NULL
// NUL is a character with all bits set to zero
// NULL is a pointer that is guaranteed to compare unequal to a pointer to any object or function

#include <stdio.h>

#define MAX_NAME_LENGTH 100

int string_length(char s[]);

int main(void)
{
    char name[MAX_NAME_LENGTH]; // Corrected to specify the array size

    printf("Enter your name: ");
    scanf("%99s", name); // Ensure we don't read more characters than can fit in the array

    printf("The length of your name is: %d\n", string_length(name));

    return 0;
}

int string_length(char s[])
{
    int n = 0;
    while (s[n] != '\0') // Loop until the null terminator is found
    {
        n++;
    }
    return n;
}
