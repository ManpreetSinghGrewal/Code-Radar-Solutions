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
    for(int j = 1;j<n;j++){ 
            nea[j] = nea[j - 1] + nea[j]; 
        }  
    for(int i = 0;i<n;i++){
        printf("%d ",nea[i]);
    }

    return 0;
}