// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[99];
    char a;
    scanf("%s",str);
    scanf(" %c",&a);
    int count = 0;
    int l = strlen(str);
    for(int i =0;i<l;i++){
        if(str[i] == a){
            count = count + 1;
        }
    }
    printf("%d",count);

}