#include <stdio.h>
#include <string.h>

void printArray(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

int main() {
    char arr[100];
    fgets(arr, 100, stdin);
    int n = strlen(arr) - 1;
    char temp[n];
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
