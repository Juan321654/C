#include <stdio.h>

int main(void)
{
    int numbers[] = {200, 500, 10, 5, 100, 1, 50};

    // Calculate the length of the array
    int length = sizeof(numbers) / sizeof(numbers[0]);
    // you calculate the length of an integer array by dividing the total size of the array in bytes by the size of one element in the array. 

    int n;
    printf("Enter a number to find: ");
    scanf("%d", &n);

    int found = 0; // Flag to check if the number was found

    for (int i = 0; i < length; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found %d at position %d\n", n, i);
            found = 1; // Update found flag
            break;     // Exit the loop since we found the number
        }
    }

    if (!found) // If the number was not found
    {
        printf("%d not found\n", n);
    }

    return 0; // Return 0 to indicate successful execution
}
