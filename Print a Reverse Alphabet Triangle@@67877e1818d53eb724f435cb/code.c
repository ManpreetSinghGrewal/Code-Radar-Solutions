#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        char di = char(n);
        for(char j = 'A';j<=di;j--){
            printf("%c ",j);
        }printf("\n");
    }
    return 0;
}