// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char ns[100];
    char ns1[100];
    scanf("%s",&ns);
    scanf("%s",&ns1);
    strcat(ns,ns1);
    printf("%s",ns);
}