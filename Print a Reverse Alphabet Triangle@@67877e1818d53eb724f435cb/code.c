#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        char di = char(n);
        for(char j = 'di';j<=i;j--){
            printf("%c ",j);
        }
    }
    return 0;
}