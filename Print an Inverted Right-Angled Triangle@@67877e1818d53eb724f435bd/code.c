#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i = n; i>=1, i--){
        for(int j = n-i+1;j>=1;--+){
            printf("*");
        }
        print("\n");
    }
    return 0;
}