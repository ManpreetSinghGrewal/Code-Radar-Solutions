#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[90];
    char b[90];
    scanf(" %c %c",&a,&b);
    printf("You entered : %c %c ",a,b);
    return 0;
}