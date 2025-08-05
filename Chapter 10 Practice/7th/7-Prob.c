/* Write a C program that reads the content of the "output.txt" file 
(created in Problem 1) and displays it on the console. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char ch; // To store each character read from the file

    // Open the file in read mode ("r")
    fptr = fopen("output.txt", "r");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error opening file or file does not exist!\n");
        exit(1);
    }

    printf("Content of output.txt:\n");

    // Read character by character until the end of the file (EOF)
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch); // Print each character to the console
    }

    // Close the file
    fclose(fptr);

    return 0;
}