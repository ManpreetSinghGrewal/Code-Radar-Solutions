// Your code here...
int isPrime(int n){  
    if (n <= 1){
        return 0;
    }
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return 0;
        }  
    }   
    return 1;
}
int printPrimesInRange(int a,int b){
    int greater = a;
    int smaller = b;
    if(b > greater){
        greater = a;
        smaller = b;
    } 
    else{
        greater = a;
        smaller = b;
    }
    for(int i=smaller;i<=greater;i++ ){
        if(isPrime(i)){
            printf("%d ",i);
        }
    }
}