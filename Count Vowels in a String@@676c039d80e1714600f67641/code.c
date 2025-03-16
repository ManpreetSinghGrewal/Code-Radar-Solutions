#include <stdio.h>
#include <string.h>

int main() {
    char str[99];
    printf("%s\n", welcome()); // Optional: Display welcome message
    scanf("%98[^\n]", str);    // Take input while preventing buffer overflow

    int vsize = 0;             // Initialize vowel counter
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vsize++;
        }
    }

    printf("%d", vsize); // Output the count
    return 0;
}
