// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    for(int i =0;i< strlen(str);i++){
        if(str[i] == ' '){
            for(int j =i;j< strlen(str);j++){
                str[j] = str[j+1];
            }
        }
    }
    int l = strlen(str);
    char temp[100];
    int j= 0;
    for(int i = l - 1;i>=0;i--){
        temp[j] = str[i];
        j++;
    }
    if(strcmp(temp,str) == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}