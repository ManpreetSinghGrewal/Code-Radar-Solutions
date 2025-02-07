#include <stdio.h>
int is_prime(int n){  
    if (n <= 1){
        return 0;
    }
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return 0;
        }  
    }   
    return 1;  
}
int a;
scanf("%d",&a);
for(int i = 1;i<=n;i++){
    int b;
    scanf("%d",&b);
    printf(is_prime(b));
}