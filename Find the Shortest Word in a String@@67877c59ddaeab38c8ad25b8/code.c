#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); // Reads full line including spaces

    // Remove the newline character if present
    str[strcspn(str, "\n")] = 0;

    char *token = strtok(str, " ");  // First token
    if (token == NULL) { // Handle case when input is empty
        printf("No words found!\n");
        return 0;
    }

    char *smallest = token; // Assume first token is the smallest

    while (token != NULL) { // Loop through all tokens
        if (strlen(token) < strlen(smallest)) {
            smallest = token; // Update smallest if a shorter token is found
        }
        token = strtok(NULL, " "); // Get next token
    }

    printf("%s\n", smallest);
    return 0;
}
