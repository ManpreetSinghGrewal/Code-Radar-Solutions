// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int sum = 0;
    for(int i = 0;str[i] != '\0';i++){
        if(str[i] == ' '){
            sum = sum + 1;
        }
    }
    printf("%d",sum+1);
}