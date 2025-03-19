// Your code here...
int selectionSort(int arr[],int n){
    int mi ;
    for(int i =0;i<n;i++){
        mi = i;
        for(int j =i+1;j<n;j++){
            if(arr[j] < arr[mi]){
                mi = j;
            }
        }
        int temp = arr[mi];
        arr[mi] = arr[i];
        arr[i] = temp;
    }
}
int kthSmallest(int arr[],int n,int target){
    selectionSort(arr,n);
    int l = -1;
    int result;
    if(target > 0 || target<=n){
       for(int i=0;i<n;i++){
        result = arr[target-1];
        return result;
        return 0;
       }
    }
    return -1;
}