#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int max = arr[n-1];
    for(int i = n-2;i>=0;i--){
        if(arr[i] > arr[n-1]){
            max = arr[i];
            printf("%d ",max);
        }
    }printf("%d",arr[n-1]);
    return 0;
}
