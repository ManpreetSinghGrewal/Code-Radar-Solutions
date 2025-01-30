#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n;i++){
        if(i <= (n+1)/2){
            for(int j =1;j<=n-i,k++){
                printf(" ");
            }
            for(int k = 1;k<=2*i-1;k++){
                printf("*");
            }
            }
         else{
            printf("****");
         }   
        }
    }
    return 0;
}