// Your code here...
int printArray(int arr[],int n){
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void selectionSort(int arr[],int n){
    int mi;
    for(int i =0;i<n;i++){
        mi = i;
        for(int j =i+1;j<n;j++){
            if(arr[j] <arr[mi]){
                mi = j;
            }
        }
        int temp = arr[mi];
        arr[mi]=arr[i];
        arr[i] = temp;
    }
}