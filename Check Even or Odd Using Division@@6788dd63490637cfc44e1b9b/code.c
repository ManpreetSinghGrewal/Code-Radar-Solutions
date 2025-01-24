#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if( (a / 2) * a == a){
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}