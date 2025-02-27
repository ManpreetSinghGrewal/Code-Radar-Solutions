#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Corrected scanf statement
    }
    int even_sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {  // Check if the number is even
            even_sum += arr[i];
        }
    }
    if (even_sum != 0) {
        printf("%d", even_sum);
    } else {
        printf("-1");
    }
    return 0;  // Added return statement
}
