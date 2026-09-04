// Write a program using function to print the following pattern (first n lines)
/*
 *
 ***
 *****
 */
#include <stdio.h> // Include the standard input/output header file.

void print_stars(int); // Declare the function print_stars that takes an integer argument.

void print_stars(int n)
{ // Define the function print_stars.

    if (n == 0) // Check if the value of n is zero.
    {
        return; // Stop the function when n is zero.
    }

    printf("*");        // Print one star.
    print_stars(n - 1); // Recursively print the remaining stars.
}

int main()
{ // Start of the main function.

    char c = '*';                     // Declare a character variable c and initialize it with '*'.
    int n;                            // Declare an integer variable n to store the number of lines.
    printf("Enter the value of n: "); // Ask the user to enter n.
    scanf("%d", &n);                  // Read the value of n from the user.

    for (int i = 1; i < n + 1; i++) // Loop from 1 to n.

    {
        print_stars(2 * i - 1); // Print stars for the current line.
        printf("\n");           // Move to the next line after printing the stars.
    }

    return 0; // End the program successfully.
}
