#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a = 1;
        for(int j=1 ;j<=i;j++){
            int d= 64 + a;
            char ch = (char)d;
            printf("%c ",ch);
            a = a + 1;
        }printf("\n");
    }
    return 0;
}