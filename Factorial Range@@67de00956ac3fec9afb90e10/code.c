// Your code here...
int factorial(int n){
    int s = 1;
    int fac = 1;
    if(n<=1){
        fac = 1;
        return fac;
    }
    else{
        for(int i=0;i<n;i++){
            s = s*i; 
        }
        fac = s;
    }
    return fac;
}
int factorialRange(int start,int end){
    for(int i = start;i<end;i++){
        int k = factorial(i);
        printf("%d",k);
        printf("\n");
    }
}