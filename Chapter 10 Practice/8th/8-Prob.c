/* Modify "output.txt" by appending a new line of text to its existing content 
without overwriting anything.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char text[100];

    // Open the file in append mode ("a")
    // If the file doesn't exist, it will be created.
    // If it exists, new data will be appended to the end.
    fptr = fopen("output.txt", "a");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter text to append to the file: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        printf("Error reading input!\n");
        fclose(fptr);
        exit(1);
    }

    // Append a newline character first for better formatting
    fprintf(fptr, "\n%s", text);

    printf("Text successfully appended to output.txt\n");

    fclose(fptr);

    return 0;
}