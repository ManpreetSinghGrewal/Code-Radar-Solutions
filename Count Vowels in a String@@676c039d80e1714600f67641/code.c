#include <stdio.h>
#include <string.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[99];
    scanf("%[^\n]",&str);
    int i = 0;
    vsize = 0;
    while(str[i]!='\0'){
        if(str[i] == 'a' || str[i]== 'e' || str[i]=='i' || str[i]=='o' || str[i] == 'u'){
            vsize++;
            i++;
        }
    }
    printf("%d",vsize);
    return 0;
}