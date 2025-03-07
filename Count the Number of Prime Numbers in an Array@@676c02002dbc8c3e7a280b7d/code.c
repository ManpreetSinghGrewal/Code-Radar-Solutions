#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}


int main() {
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int count = 0;
    for(int j= 0;j<n;j++){
        if(isPrime(arr[j])){
            count = count + 1;
        }
    }
    printf("%d",count);
    return 0;
}