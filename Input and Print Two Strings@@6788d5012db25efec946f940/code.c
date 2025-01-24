#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[90];
    char b[90];
    scanf(" %c %c",&a,&b);
    printf("You entered : %89c %89c ",a,b);
    return 0;
}