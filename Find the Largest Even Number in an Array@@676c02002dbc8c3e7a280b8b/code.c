#include <stdio.h>
int is_even(int n){
    if(n % 2 == 0){
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
    int largest = 0;
    for (int i = 0; i < n; i++) {
        if(is_even(arr[i]) && arr[i] > largest){
            largest = largest + arr[i];
        }
    }
    if(largest == 0){
        printf("-1");
    }
    else{
        printf("%d",largest);
    }
    
}
