// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[99];
    scanf("%s",str);

    for(int i = 0;str[i]!='\0';i++){
        int c= 0;
        for(int j = 0;str[j]!='\0';j++){
            if(str[i] == str[j]){
                c++;
            }
        }
        if(c == 1){
            printf("%c",str[i]);
            return 0;
        }
        else{
            return "-"
        }
    }
}