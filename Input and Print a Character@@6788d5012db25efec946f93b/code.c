#include <stdio.h>
#include <string.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%s",&a);
    printf("You entered: %s",a);
    
    return 0;
}