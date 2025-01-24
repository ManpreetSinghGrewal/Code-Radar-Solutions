#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a>=1 && a<=12){
        if(a==2){
            printf("28");
        }
        else if(a == 4 || a == 6 || a == 9 || a == 11){
            printf("30");
        }
        else{
            printf("31");
        }
    else{
        printf("Invalid month");
    }
    }
    return 0;
}