// Your code here...
#include <stdio.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin); // Reads full line including spaces
    char *token = strtok(str, " ");  // First token
    char *smallest = token; // Assume first token is the smallest

    while (token != NULL) { // Loop through all tokens
        if (strlen(token) < strlen(smallest)) {
            smallest = token; // Update smallest if a shorter token is found
        }
        token = strtok(NULL, " "); // Get next token
    }

    printf(" %s\n", smallest);

    return 0;
}
