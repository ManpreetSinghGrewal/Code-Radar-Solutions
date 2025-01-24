#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[90];
    char b[90];
    scanf(" %89s %89s",&a,&b);
    printf("You entered : %s and %s ",a,b);
    return 0;
}