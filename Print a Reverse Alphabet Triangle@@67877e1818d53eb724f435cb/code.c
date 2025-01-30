#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j = 1;j<=n-i+1;j++){
            int di = 64 + i;
            char ch = (char)di;
            printf("%c ",ch);
            
        }printf("\n");
    }
    return 0;
}