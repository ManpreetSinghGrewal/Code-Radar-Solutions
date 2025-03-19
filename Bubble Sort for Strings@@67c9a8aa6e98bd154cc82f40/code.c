// Your code here...
void bubbleSort(char arr[],int n){
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(int(arr[i][0]) > int(arr[j][0])){
                char temp[99] = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}
