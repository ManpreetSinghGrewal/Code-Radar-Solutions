#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int printarr(int arr[],int n){
   
}

int main() {
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i = 0;i<n;i++){
        scanf("%d ",&num[i]);
    }
    int nea[n];
    nea[0] = num[0];
    for(int j = 2;j<n;j++){
        for(int k = 0 ; k<n;k++){
            nea[j] = num[k+1] + num[k + 2]; 
        }  
    } 
    for(int i = 0;i<n;i++){
        printf("%d ",nea[i]);
    }

    return 0;
}