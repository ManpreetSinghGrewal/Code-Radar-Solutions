#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int findFirstPeek(int arr[], int n) {
    if (n < 3) return -1; // not enough elements to find a peek

    if (arr[0] > arr[1]) return arr[0]; // first element is a peek

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i]; // found a peek element
        }
    }

    if (arr[n - 1] > arr[n - 2]) return arr[n - 1]; // last element is a peek

    return -1; // no peek element found
}

int main() {
    int arr[] = {1, 3, 5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peek = findFirstPeek(arr, n);

    if (peek != -1) {
        printf("First peek element is: %d\n", peek);
    } else {
        printf("No peek element found\n");
    }

    return 0;
}
