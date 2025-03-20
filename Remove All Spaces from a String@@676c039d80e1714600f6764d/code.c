// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int j =0;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] ='\0';
    int l = strlen(str);
    for(int i =0;i<l;i++){
        str[j++] = str[i];
    }
    str[j] = '\0';
    printf("%s",str);
}