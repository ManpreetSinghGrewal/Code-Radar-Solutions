#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    for (int i = 0; i < k; i++) {
        int temp = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    // Declare the array with the specified size
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d\n", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    rotateArray(arr, n, k);
    printArray(arr, n);

    return 0;
}

