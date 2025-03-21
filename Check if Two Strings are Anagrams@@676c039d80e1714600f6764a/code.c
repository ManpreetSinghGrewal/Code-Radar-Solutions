// Your code here...
#include <stdio.h>
#include <string.h>
int bsort(char arr[99];int n){
    for(int i = 0;arr[i] !='\0';i++){
        for(int j = 0;arr[j] !='\0'){
            if(arr[j] >arr[j+1]){
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}
int main(){
    char str1[99];
    char str2[99];
    scanf("%s",str1);
    scanf("%s",str2);
    char s1 = bsort(str1,99);
    char s2 = bsort(str2,99);
    if(strcmp(s1,s2) == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
}