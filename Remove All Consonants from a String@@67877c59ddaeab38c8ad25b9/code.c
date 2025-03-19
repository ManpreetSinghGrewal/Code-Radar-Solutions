#include <stdio.h>
#include <string.h>

void printArray(char arr[], int size) {
    for (int i = 0; i < size; i++) { // Start from 0
        if (i > 0 && arr[i - 1] == ' ') {
            printf(" %c", arr[i]);
        } else {
            printf("%c", arr[i]);
        }
    }
}

int main() {
    char arr[100];
    fgets(arr, 100, stdin);

    int n = strlen(arr);
    if (arr[n - 1] == '\n') { // Remove trailing newline
        arr[n - 1] = '\0';
        n--;
    }

    char temp[100]; // Ensure temp has enough space
    int tempIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' ||
            arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U') {
            temp[tempIndex] = arr[i];
            tempIndex++;
        }
    }

    printArray(temp, tempIndex);
    return 0;
}
