// Your code here...
#include <stdio.h>
#include <string.h>
int bsort(int n;char arr[n]){
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
    char s1 = bsort(99,str1);
    char s2 = bsort(99,str2);
    if(strcmp(s1,s2) == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
}