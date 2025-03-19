// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str1[99];
    char str2[99];
    scanf("%s",str1);
    scanf("%s",str2);
    if(strcmp(str1,str2) ==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}