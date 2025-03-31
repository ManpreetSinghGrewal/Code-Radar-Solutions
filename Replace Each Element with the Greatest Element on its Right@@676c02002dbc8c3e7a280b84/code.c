// Your code here...
#include <stdio.h>
void rwg(int arr[],int n){
    int mfr = -1;
    for(int i=n-1;i>0;i--){
        int c = arr[i];
        arr[i] = mfr;
        if(c > mfr){
            mfr = c;
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    rwg(arr,n);
    printArray(arr,n);

}