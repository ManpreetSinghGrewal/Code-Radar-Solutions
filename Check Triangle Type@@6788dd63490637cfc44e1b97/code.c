#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a==b!=c) ||(a!=b==c) || (c==a!=b)){
        printf("Isosceles");
    }
    else if(a == b == c == a){
        printf("Equilateral");
    }
    else{
        printf("Scalene");
    }


    return 0;
}