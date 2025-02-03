#include <stdio.h>
#include <string.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[99];
    scanf("%98[^\n]",&str);
    int vsize = 0;
    while(str[vsize]){
        if(str[vsize] == 'a' || str[vsize]== 'e' || str[vsize]=='i' || str[vsize]=='o' || str[vsize] == 'u'){
            vsize++;
        }
    }vsize++;
    printf("%d",vsize);
    return 0;
}