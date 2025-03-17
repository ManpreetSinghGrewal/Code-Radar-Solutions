// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[99];
    scanf("%s",str);
    int l = strlen(str);
    int freq[100];
    for (int i = 0; i < l; i++) {
        freq[i] = -1;
    }
    for(int i = 0;i<l;i++){
        int count=1;
        for(int j = i+1;j<l;j++){
            if(str[i] == str[j]){
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0){
            freq[i] = count;
        }
    }
     for (int i = 0; i < l; i++) {
        if (freq[i] != 0) {
            printf("%c %d\n", str[i], freq[i]);
        }
     }
}