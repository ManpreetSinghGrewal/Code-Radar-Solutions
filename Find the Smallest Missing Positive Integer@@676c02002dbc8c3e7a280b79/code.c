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
    for(int i=0;i<n;i++){
            if(arr[i] == k ){
                k++;
            }
    }

    printf("%d",k);
    return 0;
}