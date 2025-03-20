// Your code here...
#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100], output[100];
    int j = 0;

    fgets(input, sizeof(input), stdin);

    // Process each character
    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) { // Check if it's a letter
            char upper = toupper(input[i]); // Convert to uppercase
            if (upper != '\n') {
                output[j++] = upper; // Add to output if not a vowel
            }
        }
    }

    output[j] = '\0'; // Null-terminate the output string

    printf("%s\n", output);

    return 0;
}
