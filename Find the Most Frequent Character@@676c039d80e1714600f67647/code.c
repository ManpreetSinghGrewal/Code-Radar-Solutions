#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int mc = 0; // Maximum count
    char mf = '\0'; // Most frequent character

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str); // Store the length of the string

    for (int i = 0; i < length; i++) {
        int c = 0; // Counter for the current character
        for (int j = 0; j < length; j++) {
            if (str[i] == str[j]) { // Compare all characters in the string
                c++;
            }
        }
        // Update most frequent character and its count
        if (c > mc || (c == mc && str[i] < mf)) {
            mc = c;
            mf = str[i];
        }
    }

    if (mf != '\0') {
        printf("%c", mf);
    } else {
        printf("No valid characters in the string.\n");
    }

    return 0;
}
