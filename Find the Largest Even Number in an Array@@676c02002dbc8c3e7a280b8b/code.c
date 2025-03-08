#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int is_even(int n){
    if(abs(n) % 2 == 0){
        return 1;
    }
    return 0;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    int largest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if(is_even(arr[i]) && arr[i] > largest){
            largest =  arr[i];
        }
    }
    if(largest == INT_MIN){
        printf("-1");
    }
    else {
        printf("%d",largest);
    }
    
}
