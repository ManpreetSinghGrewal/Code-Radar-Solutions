// Your code here...
void bubbleSort(char arr[][99],int n){
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[i][0] > arr[j][0]){
                char temp[99];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}
