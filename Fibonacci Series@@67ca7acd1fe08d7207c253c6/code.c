// Your code here...
int fibonacciSeries(int n){
    int a =0;
    int b = 1;
    int c = a+b;
    printf("0 ");
    for(int i = 0;i<n;i++){
        printf("%d ",c);
        b = a + b;


    }
}