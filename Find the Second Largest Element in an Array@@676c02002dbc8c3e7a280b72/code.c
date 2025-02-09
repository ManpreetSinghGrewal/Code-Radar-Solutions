int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int k = 0; k < n; k++) {
        scanf("%d", &arr[k]);
    }

    int greater = arr[0];
    int secondg = -2147483648; // Initialize with minimum possible integer value

    for (int i = 0; i < n; i++) {
        if (arr[i] > greater) {
            secondg = greater;
            greater = arr[i];
        } else if (arr[i] > secondg && arr[i] != greater) {
            secondg = arr[i];
        }
    }

    if (secondg == -2147483648) {
        printf("No second largest element found.");
    } else {
        printf("%d", secondg);
    }

    return 0;
}
