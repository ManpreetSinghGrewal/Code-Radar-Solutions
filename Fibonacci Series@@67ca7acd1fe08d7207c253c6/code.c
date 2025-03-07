// Your code here...
int fibbonaciSeries(int n){
    int a =0;
    int b = 1;
    printf("0 ");
    int c;
    for(int i = 0;i<n;i++){
        
        c = a + b;
        int temp = b;
        a = temp;
        b = a + b;
        printf("%d ",b);

    }
}