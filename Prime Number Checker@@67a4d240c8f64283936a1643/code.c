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
int main(){
    int a;
    scanf("%d\n",&a);
    for(int i = 1;i<=a;i++){
    int b;
    scanf("%d",&b);
    if(is_prime(b)){
        printf("1");
    }
    else{
        printf("0");
    }
}return 0;
}      