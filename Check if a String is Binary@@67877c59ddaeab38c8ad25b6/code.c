// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char arr[100];
    fgets(arr,100,stdin);
    for(int i = 0;i<100;i++){
        if(arr[i] != 1 || arr[i] != 0){
            printf("No");
            return 0;
        }
    }printf("Yes");
}