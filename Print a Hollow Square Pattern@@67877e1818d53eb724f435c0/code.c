#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if(i==1 || i==n || j ==1  || j == n){
                for(int k =1;k<=n;k++){
                    printf("*");
                }printf("\n");
            }
            else{
                printf("");
            }
        }
    }
    return 0;
}