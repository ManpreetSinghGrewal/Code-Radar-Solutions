#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    int num[n];
    scanf("%d" &n);
    for(int i = 0;i<n;i++){
        scanf("%d ", &num[i]);
    }
    int t;
    scanf("%d",&t);
    int found = 0;
    for(int i = 0 ; i<n;i++){
        if(t == num[i]){
            printf("%d",i);
            found = 1;
            break;
        }
    }
        
    if(!found){
        printf("-1");
    }
    return 0;
}