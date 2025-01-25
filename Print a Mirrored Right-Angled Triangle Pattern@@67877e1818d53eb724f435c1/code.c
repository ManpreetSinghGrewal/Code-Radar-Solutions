#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scamf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j =1;j <n+1;j++){
            if(j<=n-i){
                printf("");
            }
            else{
                printf("*");
            }
        }
    }
    return 0;
}