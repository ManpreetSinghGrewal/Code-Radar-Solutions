// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min = arr [0] -arr [1];
    for(int i =0;i<n-1;i++){
        for(int j =0;j<n-1;j++){
            if(arr[i] - arr(j+1) > min - min1){
                min,min1 = arr[i],arr[j+1];
            }
        }
    }
    printf("%d %d",min,min1);
    
}