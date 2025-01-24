#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[];
    char b[];
    scanf(" %c %c",&a,&b);
    printf("You entered : %c %c ",a,b);
    return 0;
}