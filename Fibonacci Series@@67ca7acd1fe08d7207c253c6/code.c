// Your code here...
int fibonacciSeries(int n){
    int a =0;
    int b = 1;
    printf("0 ");
    for(int i = 0;i<n;i++){
        printf("%d ",b);
        int c = a + b;
        b = c;
    }
}