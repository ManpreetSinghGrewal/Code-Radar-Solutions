#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int lcb = a & 1;
    if( a & 1){
        printf("Set");
    }
    else if(a != 0){
        printf("Not Set");
    }
    return 0;
}