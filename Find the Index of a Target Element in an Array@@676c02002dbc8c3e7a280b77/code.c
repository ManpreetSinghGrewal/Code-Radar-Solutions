#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    int num[n];
    for(int i = 0;i<n;i++){
        scanf("%d", num[i]);
    }
    int t;
    scanf("%d",&t);
    for(int i = 0 ; i<n;i++){
        if(t == num[i]){
            printf("%d",i);
        }
        else{
            print("-1");
        }
    }
    return 0;
}