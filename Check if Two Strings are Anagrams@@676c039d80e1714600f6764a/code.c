// Your code here...
#include <stdio.h>
#include <string.h>
void bsort(char arr[]){
    int n = strlen(arr);
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j] >arr[j+1]){
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    char str1[99];
    char str2[99];
    scanf("%s",str1);
    scanf("%s",str2);
    bsort(str1);
    bsort(str2);
    if(strcmp(str1,str2) == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
}