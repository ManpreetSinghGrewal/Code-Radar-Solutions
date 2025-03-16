#include <stdio.h>


int main() {
    char s[90];
    scanf("%89s",s);
    char ch[90];
    int k = 89;
    for(int i= 0;i < 90;i++){
        ch[k] = s[i];
        if(s[i] == '\0')break;
        
        k--;
    }
    ch[90 - (k + 1 )] = '\0';
    printf("%s",ch);

    return 0;
}