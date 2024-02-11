#include <stdio.h>

typedef struct
{
    char *name;
    int age;
} person;

int main(void)
{
    person people[2];

    people[0].name = "Brian";
    people[0].age = 21;

    people[1].name = "David";
    people[1].age = 23;

    return 0;
}