#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d\n",&n);
    int arr[n];
    if(n<3){
        printf("-1")
    }
    if(arr[0] > arr[1]){
        printf("%d",arr[0]);
    }
    for(int i = 1;i<n-1;i++){
        if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]){
            printf("%d",arr[i]);
        }
    }
    if(arr[n - 1] > arr[n - 2]){
        printf("%d", arr[n-1]);
    }
    else{
        printf("No element found");
    }
}