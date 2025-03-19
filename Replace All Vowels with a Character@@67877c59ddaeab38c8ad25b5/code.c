#include <stdio.h>
#include <ctype.h>

void replace_vowels(char str[], char c) {
    for (int i = 0; str[i]; i++) {
        if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || 
            tolower(str[i]) == 'o' || tolower(str[i]) == 'u') {
            str[i] = c;
        }
    }
}

int main() {
    char str[100];
    char c;

    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0'; // Remove the newline character from input

    scanf(" %c", &c);

    replace_vowels(str, c);

    printf("%s\n", str);

    return 0;
}
