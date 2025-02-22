// Your code here...
#include  <stdio.h>
int main(){
    int n,tg;
    int arr[n];
    scanf("%d %d",&n,&tg);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i =0;i<n;i++){
        if(arr[i] = tg){
            sum = sum + 1;
        }
    }
    printf("%d",sum);
    return 0;
}