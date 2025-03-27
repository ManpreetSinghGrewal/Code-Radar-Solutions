// Your code here...
#include <stdio.h>
#include <math.h>

void bsort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){

            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
        
    }
}
int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bsort(arr,n);
    int sm;
    if(arr[0] == arr[n-1]){
        printf("-1");
        return 0;
    }
    else{
        printf("%d",arr[n-3]);
    }
}