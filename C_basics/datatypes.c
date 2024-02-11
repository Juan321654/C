#include <stdio.h>

typedef char *string; // Create a new type called "string" which is a pointer to a char

// Define a structure
struct Person
{
    char name[50];
    int age;
};

// Define a union
union Data
{
    int i;
    float f;
    char str[20];
};

// Define an enumeration
enum boolean
{
    NO,
    YES
};

int main(void)
{
    int n = 50;
    int numbers[] = {200, 500, 10, 5, 100, 1, 50};
    char c = 'A';
    char *word = "Hello, World!";
    char arr[] = "Hello, World!";
    string s = "Hello, World!";

    // Float and double
    float fl = 5.75f;
    double dbl = 19.99;

    // Structure
    struct Person person;
    person.age = 30;
    strcpy(person.name, "John Doe"); // Using strcpy to copy string into char array

    // Union
    union Data data;
    data.i = 10;

    // Enumeration
    enum boolean isTrue = YES;

    // Printing examples
    printf("Integer: %d\n", n);
    printf("Character: %c\n", c);
    printf("String (pointer): %s\n", word);
    printf("String (array): %s\n", arr);
    printf("String (typedef): %s\n", s);
    printf("Float: %.2f\n", fl);
    printf("Double: %.2f\n", dbl);
    printf("Person: %s, %d\n", person.name, person.age);
    printf("Union Data (int): %d\n", data.i);
    printf("Enumeration (boolean): %d\n", isTrue);

    return 0;
}
