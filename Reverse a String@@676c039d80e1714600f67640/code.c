#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[90];
    scanf("%89s",&s);
    char ch[90];
    int k = 89;
    for(int i= 0;i<=89;i++){
        if(s[i] == '\0')break;
        ch[k] = s[i];
        k-- ;
    }
    
    printf("%89s",ch);

    return 0;
}