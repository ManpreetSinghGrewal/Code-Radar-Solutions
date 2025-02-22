#include <stdio.h>

void findLeaders(int arr[], int n) {
    int leaders[n];
    int index = 0;
    
    // First element is always a leader
    leaders[index++] = arr[0];
    int max_so_far = arr[0];

    // Traverse the array from left to right
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_so_far) {
            max_so_far = arr[i];
            leaders[index++] = arr[i];
        }
    }

    // Print the leaders in the order they occur
    for (int i = 0; i < index; i++) {
        printf("%d ", leaders[i]);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d ",&arr[i]);
    }

    findLeaders(arr, n);
    
    return 0;
}
