#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n == 1) {
        printf("-1");
        return 0;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int min_diff = arr[1] - arr[0];
    int pair1 = arr[0];
    int pair2 = arr[1];

    for (int i = 0; i < n - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff < min_diff) {
            min_diff = diff;
            pair1 = arr[i];
            pair2 = arr[i + 1];
        }
    }

    printf("%d %d", pair1, pair2);
    return 0;
}
