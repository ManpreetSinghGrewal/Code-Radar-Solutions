#include <stdio.h>
int is_prime(int n){
    if(n<=1){
        return 0;
    }
    else{
        for(int i = 2;i*i<=n;i++){
            return 1;
        }
    }
    return 1;
}
