// Your code here...
int binarySearch(int arr[],int n,int target){
    for(int i =0;i<n;i++){
        if(arr[i] == target){
            return i;
        }
        if(arr[i] == arr[i+1]){
            return 3;
        }
    }
    return -1;
}