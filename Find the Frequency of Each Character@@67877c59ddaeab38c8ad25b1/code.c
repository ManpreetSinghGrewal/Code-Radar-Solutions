// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[99];
    scanf("%s",str);
    int l = strlen(str);
    for(int i = 0;i<l;i++){
        int count=0;
        for(int j = 0;j<l;j++){
            if(str[i] == str[j]){
                count++;
            }
        }
        printf("%c: %d",str[i],count);
    }
}