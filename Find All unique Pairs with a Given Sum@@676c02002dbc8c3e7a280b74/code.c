// Your code here...
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

    // Find pairs
    int left = 0;
    int right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            printf("%d %d\n", arr[left], arr[right]);
            left++;
            right--;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the target sum: ");
    scanf("%d", &target);

    find_pairs(arr, n, target);

    return 0;
}

