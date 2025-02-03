#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int printarr(int arr[],int n){
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&num[i]);
    }

    return 0;
}