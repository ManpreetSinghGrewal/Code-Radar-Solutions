// Your code here...
#include <stdio.h>
int is_palindrome(int n){
    int reversed = 0;
    int remainder;
    while(n != 0){
        remainder =  n % 10;
        reversed = reversed + remainder;
        n /= 10;
    }
    if(reversed == n){
        return 1;
    }
    else{return 0;}

    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    int k =0;
    for(int i =0;i<n;i++){
        if(is_palindrome(arr[i])){
            k++
        }
    }
    printf("%d",k);
    
}