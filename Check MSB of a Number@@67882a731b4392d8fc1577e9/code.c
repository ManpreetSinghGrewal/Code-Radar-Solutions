#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int msb = n | 1;
    if( n & 0){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}