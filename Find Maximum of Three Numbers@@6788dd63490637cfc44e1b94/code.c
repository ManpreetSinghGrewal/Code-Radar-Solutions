#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b && a >= c){
        printf("%d",a);
    }
    if(b >= c && b >= a){
        printf("%d",b);
    }
    if(c >= a && c >= b){
        printf("%d",c);
    }
    if(a==b || b == c || c == a || a==b==c){
        printf("%d", a);
    }

    return 0;
}