#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        int a = 1;
        int b = 0;
        for(int j = 1;j<=i;j++){
            if(i % 2 != 0 ){
                if(j%2!=0){
                    printf("%d",b);
                }
                else{
                    printf("%d",a);
                }
            else{
                if(i % 2 != 0){
                    if(j % 2 != 0){
                        printf("%d",a);
                    }
                    else{
                        printf("%d",b);
                    }
                }
            }
            printf("\n");    
            }
        }
    }
    return 0;
}