#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(char j="A";(char)64+i;j++){
            printf("%c",j);
        }
    }
    return 0;
}