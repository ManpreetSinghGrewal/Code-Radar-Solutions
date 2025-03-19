#include <stdio.h>
#include <string.h>

void printArray(char arr[], int size) {
    for (int i = 0; i < size; i++) { // Iterate and print each character
        printf("%c", arr[i]);
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

    char temp[100]; // Array to store vowels and spaces
    int tempIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' ||
            arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U' || 
            arr[i] == ' '|| arr[i]>0) { // Include vowels and spaces
            temp[tempIndex] = arr[i];
            tempIndex++;
        }
    }

    printArray(temp, tempIndex); // Print the result
    return 0;
}
