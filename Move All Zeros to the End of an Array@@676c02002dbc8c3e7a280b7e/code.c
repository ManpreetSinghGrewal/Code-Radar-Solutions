// Your code here...
#include <stdio.h>
int movez(int arr[],int n){
    int temp[n];
    int k = 0;
    for(int i=0;i<n;i++){
        if(arr[i]=0){
            arr[n-1-k] = 0;
            k++;
        }
        
    for(int j=0;j<k;i++){
        arr[i] = arr[i];
    }
        
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[0]);
    }
    movez(arr,n);
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }

}