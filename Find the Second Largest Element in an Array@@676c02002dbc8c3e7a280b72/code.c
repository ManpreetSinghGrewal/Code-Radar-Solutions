#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    if (scanf("%d ", &n) != 1) {
        printf("Invalid");
        return 1;
    }

    if (n <= 0) {
        printf("");
        return 1;
    }

    int arr[n];
    for (int k = 0; k < n; k++) {
        
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
        printf("-1");
    } else {
        printf("%d", secondg);
    }

    return 0;
}
