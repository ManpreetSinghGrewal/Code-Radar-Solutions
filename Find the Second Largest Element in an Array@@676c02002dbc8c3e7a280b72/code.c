#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int k = 0;k<n;k++){
        scanf("%d",&arr[k]);
    }
    int greater = 0;
    for(int i =0;i<n;i++){
        if(arr[i] > greater){
            greater = arr[i];
        }
    int secondg =0;
    for(int j =0;j<n;j++){
        if((arr[j] > secondg) && (arr[j] != greater)){
            arr[j] = secondg;
        }
    }
    }
    printf("%d",secondg);
    return 0;
}