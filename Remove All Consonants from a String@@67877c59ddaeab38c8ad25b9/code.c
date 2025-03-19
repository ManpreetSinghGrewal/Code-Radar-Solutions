#include <stdio.h>
#include <string.h>
int main() {
    char arr[100];
    fgets(arr, 100, stdin);
    int n = strlen(arr) - 1;
    char temp[n];
    int tempIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' ||
            arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U' || arr[i] = '\0') {
            temp[tempIndex] = arr[i];
            tempIndex++;
        }
    }

    printArray(temp, tempIndex);
    return 0;
}
