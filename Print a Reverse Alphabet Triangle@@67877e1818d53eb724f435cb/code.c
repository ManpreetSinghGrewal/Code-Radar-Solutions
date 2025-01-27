#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a = 64;
        for(int j=n;j<=1;j--){
            int di = 64 + a;
            char num = char(di);
            printf("%c",num);
            a++;
        }
    }
    return 0;
}