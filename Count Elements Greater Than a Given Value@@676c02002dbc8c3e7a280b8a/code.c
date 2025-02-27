// Your code here...
#include <stdio.h>

int main() {
    int n,t;
    scanf("%d %d", &n,&t);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    int sum = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] > t){
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}
