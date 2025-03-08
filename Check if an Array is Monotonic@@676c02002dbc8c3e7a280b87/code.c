// Your code here...
#include <stdio.h>
#include <stdlib.h>

int is_m(int arr[],int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if((arr[j] <= arr[j+1]) || (arr[j] >= arr[j+1])){
                return 1;
            }
        }
    }return 0;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    if(is_m(arr,n)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
}
