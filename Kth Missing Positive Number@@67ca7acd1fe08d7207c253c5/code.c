// Your code here...
int findKthMissing(int arr[],int n,int k){
    int l = 1;
    for(int i =0;arr[i] != '\0';i++){
        if(arr[i] == l){
            l++;
        }
    }
    int result = l;
    for(int i = 0;i<k;i++){
        result = result + i;
    }
    return result;

}