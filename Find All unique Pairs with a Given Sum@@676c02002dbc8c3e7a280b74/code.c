#include <stdio.h>
void find_pairs(int arr[], int n, int target) {
    // Sort the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int prev_i = -1, prev_j = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                if (arr[i] != prev_i || arr[j] != prev_j) {
                    printf("%d %d\n", arr[i], arr[j]);
                    prev_i = arr[i];
                    prev_j = arr[j];
                }
            }
        }
    }
}

int main() {
    int n, arr[1000], target;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    find_pairs(arr, n, target);
    return 0;
}
