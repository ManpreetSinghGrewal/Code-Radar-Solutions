#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int prime(int n){
    if(n==0 || n == 1){
        return 0;}
    else{
        for(int i = 2;i<=n * n;i++){
            if(if i % n == 0){
                return 1;
            }
        }
    return 0;
    }
}

int main() {
    int num;
    scanf("%d",&num);
    int cn;
    for(int i = 1;i<=n;i++){
        scanf("%d",&cn);
        printf(prime(cn));
    }
    return 0;
}