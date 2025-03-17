// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[99];
    char a;
    scanf("%d",str);
    scanf("%d",&a);
    int count =0;
    for(int i =0;i<strlen(str);i++){
        if(str[i] == a){
            count++;
        }
    }
    printf("%d",count);

}