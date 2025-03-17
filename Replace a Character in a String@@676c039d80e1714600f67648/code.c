// Your code here...
#include <stdio.h>
#include <string.h>
int main() {
    char str[99];
    char a;
    char b;
    scanf("%s",str);
    scanf("%c",&a);
    scanf("%c",&b);
    int l= strlen(str);
    for(int i= 0;i<l;i++){
        if(str[i] == a){
            int temp = b;
            str[i] = temp;
        }
    }
    printf("%s",str);
    
}