// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k = 0;
    for(int i= 0;i<n;i++){
        for(int j =0;j<n;j++){
            if(arr[i] == arr[j] && i != j){
                k  = arr[i];
                return 0;
            }
            
        printf("-1");
        }
    }
    printf("%d",k);
    return 0;
}