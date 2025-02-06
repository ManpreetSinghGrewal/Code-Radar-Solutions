#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int lcb = a & 1;
    if( a & 1){
        printf("0");
    }
    else if(a != 0){
        printf("1");
    }
    else{
        printf("0");
    }

    return 0;
}