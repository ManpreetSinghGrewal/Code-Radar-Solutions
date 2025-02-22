// Your code here...
#include <stdio.h>
void bsort(int arr[];int n){
    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            int arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    return temp
}
int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bsort(arr,n);
    printf("%d",temp[n-3]);
}