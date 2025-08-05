/*Write a C program that takes a string input from the user 
and writes it to a text file named "output.txt".*/

#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    FILE *fptr;
    char text[100]; // Buffer to store user input

    // Open the file in write mode ("w")
    // If the file doesn't exist, it will be created.
    // If it exists, its contents will be truncated.
    fptr = fopen("output.txt", "w");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1); // Exit with an error code
    }

    printf("Enter text to write to the file: ");
    // Read a line of text from the user
    // Using fgets to prevent buffer overflow
    if (fgets(text, sizeof(text), stdin) == NULL) {
        printf("Error reading input!\n");
        fclose(fptr); // Close the file before exiting
        exit(1);
    }

    // Write the string to the file
    fprintf(fptr, "%s", text);

    printf("Text successfully written to output.txt\n");

    // Close the file
    fclose(fptr);

    return 0;
}