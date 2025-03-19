// Your code here...
int printArray(char arr[][99],int n){
    for(int i =0;i<n;i++){
        printf("%s ",arr[i]);
    }
}
void selectionSort(char arr[][99],int n){
    int mi;
    for(int i =0;i<n;i++){
        mi = i;
        for(int j =i+1;j<n;j++){
            if(arr[j][0]<arr[mi][0]){
                mi = j;
            }
        }
        char temp[99] = arr[i];
        arr[i] = arr[mi];
        arr[mi]= temp[99];
    }

}