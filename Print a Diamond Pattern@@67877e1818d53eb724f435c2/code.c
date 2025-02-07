#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=i;k++){
            printf("*");
        }
        for(int l = i-1;l>=1;l--){
            printf("*");
        }printf("\n");}
    for(int i = n-1; i >= 2; i--) {
    for(int j = 1; j <= n-i; j++) {
        printf(" ");
    }
    for(int k = 1; k <= i; k++) {
        printf("*");
    }
    for(int l = i-1; l >= 1; l--) {
        printf("*");
    }
    
    printf("\n");
}printf("*");


    
    
    return 0;
}