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
        if(str[vsize] == 'A' || str[vsize] == 'E' || str[vsize] =='I' || str[vsize] =='O' || str[vsize] == 'U'){
            vsize++;
        }vsize++;
    }
    printf("%d",vsize);
    return 0;
}