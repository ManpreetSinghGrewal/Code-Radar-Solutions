#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n;i++){
        if(i < (n+1)/2){
            for(int j =1;j<=n+1/2;j++){
                for(int k =1;k<=n - i;k++){
                    printf(" ");
                }
                for(int m =1;m<=2*i-1)
                }
            }
        }
    }
    return 0;
}