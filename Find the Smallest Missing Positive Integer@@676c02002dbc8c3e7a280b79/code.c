// Your code here...
#include <stdio.h>
int main(){
    int n;
    int arr[n];
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int k = 1;
        for(int j=0;j<n;j++){
            if(arr[j] == k){
                k++;
            }
        }
    }
    printf("%d",k);
}