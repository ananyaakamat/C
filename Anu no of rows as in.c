#include <stdio.h>

void main()
{
    int i, j, n; // Declare variables to store loop counters and the number of rows

    printf("Enter the number of rows: "); // Prompt the user to enter the number of rows
    scanf("%d", &n); // Read the user's input and store it in the n variable

    for (i = 0; i <= n; i++) // Outer loop to iterate through each row
    {
        for (j = 1; j <= n - i; j++) // Inner loop to print spaces before the numbers in each row
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++) // Inner loop to print the numbers in ascending order in each row
        {
            printf("%d", j);
        }

        for (j = i - 1; j >= 1; j--) // Inner loop to print the numbers in descending order in each row
        {
            printf("%d", j);
        }

        printf("\n"); // Print a new line after each row
    }
}