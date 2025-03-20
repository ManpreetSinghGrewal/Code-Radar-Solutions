// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[99];
    scanf("%d",str);
    char a = '\0';
    for(int i =0;i<99;i++){
        if(str[i] != a){
            printf("%c",str[i]);
            a = str[i];
        }
    }
}