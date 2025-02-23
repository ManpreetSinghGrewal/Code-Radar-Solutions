// Your code here...
#include <stdio.h>
#include <string.h>
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    char arr[100];
    fgets(arr, 100, stdin);
    int n = strlen(arr) - 1;
    int temp[n];
    for(int i =0;i<n;i++){
        if(arr[i] = 'a'|| arr[i] = 'e'|| arr[i] = 'i'|| arr[i] = 'u'|| arr[i] = 'o'){
            for(int j =0;j<n;j++){
                temp[j] = arr[i];
            }
        }
    }
    int k = strlen(temp)-1;
    printArray(temp,k);
}
    