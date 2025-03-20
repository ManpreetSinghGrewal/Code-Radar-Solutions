// Your code here...
#include <stdio.h>
int main(){
    int n;
    
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int k = 1;
    int l =0;
    for(int i=0;i<n;i++){
            if(arr[i] == k ){
                k++;
            }
            if(arr[i] == l){
                k++;
            }
    }

    printf("%d",k);
}