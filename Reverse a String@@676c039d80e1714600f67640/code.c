#include <stdio.h>
#include <string.h>
int main(){
    char str[99];
    scanf("%s",&str);
    int l = strlen(str);
    for(int i = 0;i<l;i++){
        printf("%c",str[i]);
    }
}