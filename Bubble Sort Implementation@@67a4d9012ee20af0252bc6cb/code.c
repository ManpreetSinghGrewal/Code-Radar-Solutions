int bsort(arr[n],int n){
    for(int i = 0;i<=n-2;i++){
        if(arr[i+1]<arr[i]){
            
        }
        else{
            arr[i],arr[i+1] = arr[i],arr[i+1];
        }
    }
    return arr[n];
}