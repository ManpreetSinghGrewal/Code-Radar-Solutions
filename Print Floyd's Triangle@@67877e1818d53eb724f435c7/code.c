#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int a = 0;
        for(int j= 1;j<=i;j++){
            a = a + j;
            printf("%d",a);
        }printf("\n");
        
    }
    return 0;
}