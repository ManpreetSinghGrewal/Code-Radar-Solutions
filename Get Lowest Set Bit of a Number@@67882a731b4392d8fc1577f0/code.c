#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int lcb = a & 1;
    if(lcb =1){
        printf("0");
    }
    else{
        printf("1");
    }

    return 0;
}