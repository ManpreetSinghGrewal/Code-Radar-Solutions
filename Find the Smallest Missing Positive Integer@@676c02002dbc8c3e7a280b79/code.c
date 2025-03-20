// Your code here...
#include <stdio.h>
int main(){
    int n;
    int arr[];
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int k = 1;
    for(int i=0;i<n;i++){
            if(arr[i] == k){
                k++;
            }
    }
    printf("%d",k);
}