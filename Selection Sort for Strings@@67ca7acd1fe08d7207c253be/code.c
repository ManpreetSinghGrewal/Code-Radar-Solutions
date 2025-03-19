// Your code here...
#include <string.h>
int printArray(char arr[][100],int n){
    for(int i =0;i<n;i++){
        printf("%s\n ",arr[i]);
    }
}
void selectionSort(char arr[][100],int n){
    int mi;
    char temp[100];
    for(int i =0;i<n;i++){
        mi = i;
        for(int j =i+1;j<n;j++){
            if(arr[j][0]<arr[mi][0]){
                mi = j;
            }
        }
        strcpy(temp,arr[i]);
        strcpy(arr[i],arr[mi]);
        strcpy(arr[mi],temp);
    }

}