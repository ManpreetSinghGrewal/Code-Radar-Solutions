#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i = 0;i<n-2;i++){
        if(arr[i] >= arr[i+1] && arr[i] > arr[i+2]){
            printf("%d ",arr[i]);
        }
    }printf("%d",arr[n-1]);
    return 0;
}
