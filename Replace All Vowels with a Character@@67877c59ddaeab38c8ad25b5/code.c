// Your code here...
#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100

// Function to replace vowels with a character
void replace_vowels(char str[], char c) {
    int i;
    for (i = 0; str[i]; i++) {
        // Check if the character is a vowel
        if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u') {
            // Replace the vowel with the character
            str[i] = c;
        }
    }
}

int main() {
    char str[MAX_LENGTH], c;

    // Input the string
    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);
    str[strlen(str) - 1] = '\0';  // Remove the newline character

    scanf(" %c", &c);

    // Replace vowels with the character
    replace_vowels(str, c);

    // Output the modified string
    printf("%s\n", str);

    return 0;
}
