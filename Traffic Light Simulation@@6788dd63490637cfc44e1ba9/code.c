#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    if(a == 'R'){
        printf("Stop");
    }
    else if(a == 'G'){
        printf("Go");
    }
    else if(a == 'Y'){
        printf("Go Slow");
    }
    else{
        printf("Invalid");
    }
    return 0;
}