#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int a = 0;
    for(int i=1;i<=n;i++){
        for(int j= 1;j<=n,j++){
            printf("%d",a+1);
            a++;
        }
        
    }
    return 0;
}