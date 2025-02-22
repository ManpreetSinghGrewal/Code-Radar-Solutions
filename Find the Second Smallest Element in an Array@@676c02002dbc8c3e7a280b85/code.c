// Your code here...
#include <stdio.h>
int bsort(int arr[];int n){
    int temp[n];
    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            temp[i] = arr[i+1];
            temp[i+1] = arr[i];
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
}