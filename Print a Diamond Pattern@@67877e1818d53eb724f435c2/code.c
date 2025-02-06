#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int main() {
    int num;
    scanf("%d", &num);
    int n = 1;
    for (int i = 1; i <= num; i++) {
        for(int j = 1;j<=n;j++){
            printf("*");
            n = n + 2;
        }
    }
}

