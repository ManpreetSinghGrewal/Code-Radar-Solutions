#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i =0;i<n;i++){
        scanf("%d ",&num[i]);
    }
    int is_sorted = 1;
    for(int j = 0;j<=n-1;j++){
        if(num[j]>=num[j+1]){
            is_sorted = 0;
            break;
        }
    }if(is_sorted){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
      
    return 0;
}