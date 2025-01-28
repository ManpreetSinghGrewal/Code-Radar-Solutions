#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int N;
    
    scanf("%d",&N);int a[N];
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&a[i]);
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
    }printf("%d %d",minimum,greater);
    return 0;
}