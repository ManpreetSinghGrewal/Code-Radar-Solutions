// Your code here...
void caesarCipher(char str[100], int shift,char encrypted[100]){
    int l = strlen(str);
    int j =0;
    for(int i= 0;i<l;i++){
        if(str[i]>='a' && str[i]<= 'z'){
            int temp = str[i] + shift;
            int str[i] = temp;
            encrypted[j] = str[i];
            j++;
        }
        else{
            encrypted[j] = str[i];
            j++;
        }
    }

}