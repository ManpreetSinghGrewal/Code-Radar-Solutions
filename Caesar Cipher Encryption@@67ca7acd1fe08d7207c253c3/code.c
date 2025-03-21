// Your code here...
#include <string.h>
void caesarCipher(char str[100], int shift,char encrypted[100]){
    int l = strlen(str);
    int j =0;
    int c;
    for(int i= 0;i<l;i++){
        if(str[i]>='a' && str[i]<= 'z'){
            int c = str[i] + shift;
            int str[i] = c;
            encrypted[j] = str[i];
            j++;
        }
        else{
            encrypted[j] = str[i];
            j++;
        }
    }

}