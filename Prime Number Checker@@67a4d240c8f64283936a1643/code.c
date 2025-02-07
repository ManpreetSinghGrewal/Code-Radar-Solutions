#include <stdio.h>
int prime(int n){
    if(n==0 || n == 1){
        return 0;
    }
    else{
        for(int i = 2;i <= n * n;i++){
            if(if n % i == 0){
                return 1;
            }
        }
    }
}

int main() {
    int num;
    scanf("%d",&num);
    
    for(int i = 1;i<=num;i++){
        int cn;
        scanf("%d",&cn);
        printf(prime(cn));
    }
    return 0;
}