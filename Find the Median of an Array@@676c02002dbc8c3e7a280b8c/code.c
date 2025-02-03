#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int num[90];
    for(int i = 0;i<n;i++){
        scanf("%d ",&num[i]);
    }
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum + num[i];
    }
    int median = sum / n;
    printf("%d",median);
    return 0;
}