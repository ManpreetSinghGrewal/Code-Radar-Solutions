#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d\n",n);
    int num[n];
    for(int i = 0;i<n;i++){
        scanf("%d", &num[i]);
    }
    int t;
    scanf("%d ",&t);
    for(int i = 0 ; i<n;i++){
        if(t = num[i]){
            printf("%d",i);
        }
        else{
            printf("-1");
        }
    }
    return 0;
}