// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char arr[100];
    fgets(arr,100,stdin);
    int n = strlen(arr) - 1;
    for(int i = 0;i<n;i++){
        if(arr[i] != '0' && arr[i] != '1'){
            printf("No");
            return 0;
        }
        
    }
    printf("Yes");
    return 0;
}