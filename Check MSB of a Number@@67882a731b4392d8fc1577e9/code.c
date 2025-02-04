#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int msb = (n >> 31) & 1;
    if(msb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}