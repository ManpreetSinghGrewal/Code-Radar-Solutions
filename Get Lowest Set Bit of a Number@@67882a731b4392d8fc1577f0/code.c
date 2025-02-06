#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int lcb = a & 1;
    printf("%d",lcb);

    return 0;
}