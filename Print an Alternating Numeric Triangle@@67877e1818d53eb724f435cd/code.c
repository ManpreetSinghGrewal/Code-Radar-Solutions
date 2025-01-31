#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        if(i%2==0){
            int a = 0;
        }
        else{
            int a = 1;
        }
    for(int j = 1;j<=i;j++){
        int b =1;
        if(j%2==0){
            printf("%d",a);
        }
        else{
            printf("%d",b);
        }
    }

    }
    return 0;
}