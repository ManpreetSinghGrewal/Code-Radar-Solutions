#include <string.h>
void bubbleSort(char arr[][100],int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare the first letters of the strings
            if (arr[j][0] > arr[j + 1][0]) {
                // Swap the strings
                char temp[99];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}
int printArray(int arr[],int n){
    for(int i =0;i<n;i++){
        printf("%s",arr[i]);
        printf("\n");
    }
    return 0;
}
