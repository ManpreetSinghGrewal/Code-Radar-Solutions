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
        }

        for(int j = 1+1;j<=n-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=i;k++){
            printf("*");
        }
        for(int l = i-1;l>=1;l--){
            printf("*");
        }
        
    printf("\n");}
    
    return 0;
}