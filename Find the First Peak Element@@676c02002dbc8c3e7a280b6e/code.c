#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int findFirstPeek(int arr[], int n) {
    if (n < 2) return -1; // not enough elements to find a peek

    if (arr[0] > arr[1]) return arr[0]; // first element is a peek

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i]; // found a peek element
        }
    }

    if (arr[n - 1] > arr[n - 2]) return arr[n - 1]; // last element is a peek

    return -1; // no peek element found
}

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i =0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    int peek = findFirstPeek(arr, n);

    if (peek != -1) {
        printf("%d", peek);
    } else {
        printf("-1");
    }

    return 0;
}
