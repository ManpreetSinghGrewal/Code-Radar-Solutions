// Your code here...
#include <stdio.h>
#include <stdlib.h>

int is_m(int arr[],int n){
    int increasing = 1,decreasing = 1;
    for(int i =0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            increasing = 0;
        }
        if(arr[i] < arr[i+1]){
            decreasing = 0;
        }
    }
    return increasing || decreasing;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    if(is_m(arr,n)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
}
