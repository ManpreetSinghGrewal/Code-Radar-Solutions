#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if((a / 2) * a == a){
        printf("Even");
    }else{
        printf("Not Even");
    }
    return 0;
}