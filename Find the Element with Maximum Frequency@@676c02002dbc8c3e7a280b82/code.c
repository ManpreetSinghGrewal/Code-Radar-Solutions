// Your code here...
#include <stdio.h>
int max_freq(int arr[],int n){
    int max_count = 0,max_element = arr[0];
    for(int i =0;i<n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
            if(count > max_count){
                max_count = count;
                max_element = arr[i];
            }
        }
    }
    return max_element;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    int result = max_freq(arr,n);
    printf("%d",result);
}