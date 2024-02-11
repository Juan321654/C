#include <stdio.h>

const int N = 3;

// Function to print an array of integers
void printArray(int arr[], int size)
{
    printf("The array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Move to the next line after printing the array
}

int main()
{
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        printf("Enter the number (%d): ", i);
        scanf("%d", &arr[i]);
    }

    // Use the printArray function to print the array
    printArray(arr, N);
    return 0;
}
