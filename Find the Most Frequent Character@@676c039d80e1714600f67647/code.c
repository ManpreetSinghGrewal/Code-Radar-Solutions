// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    int mc = 0;
    char mf= '\0';
    fgets(str,sizeof(str),stdin);
    for(int i = 0;i<strlen(str);i++){
        int c = 0;
        for(int j = 0;j<strlen(str)-1;j++){
            if(str[i] == str[j+1]){
                c++;
            }
        }
        if(c > mc || (c == mc && str[i] < mf)){
            mc = c;
            mf = str[i];
        } 
    }printf("%c",mf);

}