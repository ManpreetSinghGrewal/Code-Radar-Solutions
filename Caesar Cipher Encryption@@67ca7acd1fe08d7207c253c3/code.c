// Your code here...
#include <string.h>
void caesarCipher(char str[100], int shift,char encrypted[100]){
    int l = strlen(str);
    int j =0;
    for(int i= 0;i<l;i++){
        if(str[i] >= 64 && str[i] <= 167){
            int c = str[i] + shift;
            encrypted[j++] = c;
        }
        else{
            encrypted[j++] = str[i];
        }
    }
    encrypted[j] = '\0';

}