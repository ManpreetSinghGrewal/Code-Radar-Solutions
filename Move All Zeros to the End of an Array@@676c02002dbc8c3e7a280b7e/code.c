// Your code here...
#include <stdio.h>
void movez(int arr[],int n){
    int temp[n];
    int k = 0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            temp[k++] = arr[i];
        }
    }
    while (k<n){
        temp[k++] = 0;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
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