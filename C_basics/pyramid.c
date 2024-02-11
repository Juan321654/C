#include <stdio.h>

void pyramid(int height)
{
    for (int i = 0; i < height; i++)
    {
        char level[height + 1]; // Create an array for the current level
        for (int j = 0; j <= i; j++)
        {
            level[j] = '#'; // Fill the array with '#' up to the current level
        }
        level[i + 1] = '\0';            // Null-terminate the string
        printf("%*s\n", height, level); // Right-align the text
    }
}

int main()
{
    int height;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);
    pyramid(height); // Call the function with desired height
    return 0;
}
