#include <stdio.h>
#include <ctype.h>

void replace_vowels(char str[], char c) {
    int i = 0;
    while (str[i] != '\0') { // Loop until the null terminator is reached
        if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || 
            tolower(str[i]) == 'o' || tolower(str[i]) == 'u') {
            str[i] = c;
        }
        i++;
    }
}

int main() {
    char str[100];
    char c;

    fgets(str, 100, stdin); // Get input string

    scanf(" %c", &c); // Get the replacement character

    replace_vowels(str, c);

    printf("%s\n", str); // Print the modified string

    return 0;
}
