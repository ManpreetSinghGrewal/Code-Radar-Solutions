// Your code here...
#include <stdio.h>
#include <string.h>
void bsort(char arr[]){
    for(int i = 0;arr[i] !='\0';i++){
        for(int j = 0;arr[j] !='\0';j++){
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