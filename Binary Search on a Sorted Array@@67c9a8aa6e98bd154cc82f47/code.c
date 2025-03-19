// Your code here...
int binarySearch(int arr[],int n,int target){
    int k =3;
    for(int i =0;i<n;i++){
        if(arr[i] == arr[i+1]){
            return k;
        }
        if(arr[i] == target){
            return i;
        }
        
    }
    return -1;
}