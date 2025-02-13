// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i =0;i<n;i++){
        for(int j =0;i<n-1;i++)
        if(arr[i] == arr[j+1]){
            printf("%d",arr[i]);
        }
    }

}