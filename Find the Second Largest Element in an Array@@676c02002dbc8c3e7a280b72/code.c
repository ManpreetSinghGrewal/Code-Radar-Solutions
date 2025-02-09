#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int arr[n];
    for (int k = 0; k < n; k++) {
        printf("Enter element %d: ", k + 1);
        if (scanf("%d", &arr[k]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    int greater = INT_MIN;
    int secondg = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > greater) {
            secondg = greater;
            greater = arr[i];
        } else if (arr[i] > secondg && arr[i] != greater) {
            secondg = arr[i];
        }
    }

    if (secondg == INT_MIN) {
        printf("No second largest element found.\n");
    } else {
        printf("The second largest element is: %d\n", secondg);
    }

    return 0;
}
