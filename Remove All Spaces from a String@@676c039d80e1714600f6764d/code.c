// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    char temp[100];
    int j =0;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] ='\0';
    l = strlen(str);
    for(int i = 0;i<=l;i++){
        if(str[i] != '\0'){
            temp[j] = str[i];
            j++; 
        }
    }
}