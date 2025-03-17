#include <stdio.h>
#include <string.h>
int main() {
    char str[99];
    scanf("%s",&str);
    int l = strlen(str);
    char temp[99];
    for(int i=0;i<l;i++){
        str[i]= temp[l-1-i];
    }  
    if(strcmp(str,temp) == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}