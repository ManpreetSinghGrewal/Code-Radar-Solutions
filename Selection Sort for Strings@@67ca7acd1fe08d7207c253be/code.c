// Your code here...
#include <string.h>
int printArray(char arr[][99],int n){
    for(int i =0;i<n;i++){
        printf("%s ",arr[i]);
    }
}
void selectionSort(char arr[][99],int n){
    int mi;
    char temp[99];
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