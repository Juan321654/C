#include <stdio.h>

// When you declare a character array (string) in C without specifying the size in the square brackets, 
// the compiler automatically sizes the array to fit the initializer string including the null terminator. 
// For example, char name[] = "John Doe"; is equivalent to char name[9] = "John Doe"; because "John Doe" 
// is 8 characters long plus the null terminator makes 9.

// You don't always need to add a digit inside the square brackets
// when declaring and initializing a string. If you do specify a size, it should be large 
// enough to hold the entire string plus the null terminator. If the size is omitted, the compiler 
// calculates it based on the size of the string literal provided at initialization.

int main(void)
{
    char name[] = "John Doe";
    printf("The name is: %s\n", name);
    return 0; // Indicate successful execution.
}
