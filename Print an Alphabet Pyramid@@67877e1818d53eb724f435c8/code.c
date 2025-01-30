#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(char j="A";j<=(char)64+i;j++){
            printf("%c",j);
        }
    }printf("\n");
    return 0;
}