#include <stdio.h>

void findLeaders(int arr[], int n) {
    int max_from_right = arr[n - 1];

    // The rightmost element is always a leader
    printf("%d\n", max_from_right);

    // Traverse the array from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max_from_right) {
            max_from_right = arr[i];
            printf("%d\n", max_from_right);
        }
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    
    printf("Leaders in the array are:\n");
    findLeaders(arr, n);
    
    return 0;
}
