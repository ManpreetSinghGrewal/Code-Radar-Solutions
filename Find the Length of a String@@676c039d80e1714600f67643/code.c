#include <stdio.h>
#include <string.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[50];
    scanf("%[^\n]",&str);
    int size = 0;
    int i = 0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("%d",size);
    return 0;
}