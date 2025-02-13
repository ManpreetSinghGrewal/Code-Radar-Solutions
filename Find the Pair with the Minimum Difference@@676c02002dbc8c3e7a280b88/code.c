// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n == 1){
        printf("-1");
        return 0;
    }
    int min  = arr[1] - arr[0];
    int p1 = arr[0];
    int p2 = arr[1];
    for(int i = 0;i<n-1;i++){
        int diff = arr[i+1]- arr[i];
        if(diff <min){
            min = diff;
            p1 = arr[i];
            p2 = arr[i+1];

        }
    }
    printf("%d %d",p1,p2);
    return 0;
    
}