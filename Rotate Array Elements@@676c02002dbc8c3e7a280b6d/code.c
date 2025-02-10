#include <stdio.h>
#include <stdlib.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateRight(int arr[], int n, int k) {
    k = k % n; // In case k is larger than n
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
}

int main() {
    int z;
 
    scanf("%d", &z);
    
    int* arr = (int*)malloc(z * sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    for (int i = 0; i < z; i++) {
        scanf("%d", &arr[i]);
    }

    int n = z;
    int k = 3; // Number of steps to rotate

    rotateRight(arr, n, k);
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
