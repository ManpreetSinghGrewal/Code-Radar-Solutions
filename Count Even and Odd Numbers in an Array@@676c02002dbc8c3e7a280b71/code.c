#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int ev = 0;
    int od = 0;
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<=n-1;i++){
        scanf("%d",&a[i]);
        if(a[i] % 2 == 0){
            ev++;
        }
        else{
            od++;
        }
    }
    printf("%d %d",ev,od);
    return 0;
}