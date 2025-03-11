// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 1; i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int greater = 1;
    int count = 0;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        if(count > greater){
            greater = arr[i];
        }   
        } 
    }
    printf("%d",greater);
}
