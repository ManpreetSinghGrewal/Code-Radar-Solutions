#include <stdio.h>

// Function to find and print leaders in an array
void findLeaders(int arr[], int n) {
    int leaders[n];
    int leader_count = 0;

    int max_from_right = arr[n - 1];
    leaders[leader_count++] = max_from_right; // Rightmost element is always a leader

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max_from_right) {
            max_from_right = arr[i];
            leaders[leader_count++] = max_from_right;
        }
    }

    // Print leaders in correct order
    for (int i = leader_count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    findLeaders(arr, n);

    return 0;
}
