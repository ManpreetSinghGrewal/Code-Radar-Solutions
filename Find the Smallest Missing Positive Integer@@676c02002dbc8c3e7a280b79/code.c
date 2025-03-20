// Your code here...
#include <stdio.h>
void qsort(int arr[],int n){
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
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
    qsort(arr, n);
    int k = 1;
    for(int i=0;i<n;i++){
            if(arr[i] == k ){
                k++;
            }
    }

    printf("%d",k);
    return 0;
}