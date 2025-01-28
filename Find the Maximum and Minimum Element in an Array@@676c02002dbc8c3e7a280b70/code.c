#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int N;
    int a[N];
    scanf("%d",N);
    for(int i = 0;i<=N-1;i++){
        scanf("%d",a[i]);
    }
    greater = a[0];
    for(int i = 0;i<=N-1;i++){
        if(a[i] > greater){
            greater = a[i];
        }
    }
    int minimum = a[0];
    for(int i = 0;i<=N-1;i++){
        if{
            if(a[i] < minimum){
                minimum = a[i];
            }
        }
    }printf("%d %d",greater,minimum);
    return 0;
}