#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d";&n);
    for(int i = 1; i<n+1;i++){
        for(int j =1;j<i+3;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}