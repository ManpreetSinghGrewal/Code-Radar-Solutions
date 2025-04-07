#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline

    // Removing spaces
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null terminate the modified string

    // Reverse the string
    int l = strlen(str);
    char temp[l + 1]; // Ensure null termination
    temp[l] = '\0';

    for (i = l - 1, j = 0; i >= 0; i--, j++) {
        temp[j] = str[i];
    }

    // Check if palindrome
    if (strcmp(temp, str) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
