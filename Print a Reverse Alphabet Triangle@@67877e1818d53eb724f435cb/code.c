#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        char di = char(n);
        for(char j = 'A';j<=(char)n;j--){
            printf("%c ",j);
        }printf("\n");
    }
    return 0;
}