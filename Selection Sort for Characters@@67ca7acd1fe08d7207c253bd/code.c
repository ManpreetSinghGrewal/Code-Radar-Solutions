// Your code here...
int printArray(char arr[],int n){
    for(int i =0;i<n;i++){
        printf("%c ",arr[i]);
    }
}
void selectionSort(char arr[],int n){
    int mi;
    for(int i =0;i<n;i++){
        mi = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[mi]){
                mi = j;
            }
        }
        char temp = arr[i];
        arr[i] = arr[mi];
        arr[mi] = temp;
    }
}