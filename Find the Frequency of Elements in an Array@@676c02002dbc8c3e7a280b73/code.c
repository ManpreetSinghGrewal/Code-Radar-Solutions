#include <stdio.h>

void findFrequency(int arr[], int n) {
    int freq[n];  // Auxiliary array to store frequencies

    // Initialize frequency array with -1
    for (int i = 0; i < n; i++) {
        freq[i] = -1;
    }

    // Traverse the input array and count frequencies
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;  // Mark this element as counted
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    // Print the frequencies
    printf("Element\tFrequency\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d\t%d\n", arr[i], freq[i]);
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    findFrequency(arr, n);
    return 0;
}
