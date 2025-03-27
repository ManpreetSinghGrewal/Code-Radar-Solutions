// Your code here...
int factorial(int n){
    int s = 1;
    int fac = 1;
    if(n<=1){
        fac = 1;
        return fac;
    }
    else{
        for(int i=1;i<=n;i++){
            fac = fac * i; 
        }
    }
    return fac;
}
int factorialRange(int start,int end){
    if(start < 0 || end <0 || start > end){
        printf("Invalid range");
        return 0;
    }
    for(int i = start;i<=end;i++){
        int k = factorial(i);
        printf("%d",k);
        printf("\n");
    }
}
