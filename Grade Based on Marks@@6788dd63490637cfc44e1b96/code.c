#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    if(a >= 90){
        printf("A");
    }
    else if(a>=80){
        printf("B");
    }
    else if(a>=70){
        printf("C");
    }
    else if(a >=60){
        printf("D");
    }
    else if (a<60){
        printf("D");
    }
    return 0;
}