int bubbleSort(arr[n],int n){
    for(int i = 1;i<=n;i++){
        if(arr[i-1]>arr[i]){
            arr[i] = arr[i-1];
        }
        else{
            arr[i]= arr[i];
        }
    }
    return arr[n];
}