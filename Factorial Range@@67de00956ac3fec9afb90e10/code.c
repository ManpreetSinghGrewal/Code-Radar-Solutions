// Your code here...
int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return factorial(n) *factorial(n-1);
    }
    return fac;
}
int factorialRange(int start,int end){
    if(start < 0 || end <0 || start > end){
        printf("Invalid range");
        return 0;
    }
    else{
        for(int i = start;i<=end;i++){
        int k = factorial(i);
        printf("%d",k);
        printf("\n");
    }
    }
    
}
