// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char ns[100];
    char ns1[100];
    fgets(ns,100,stdin);
    fgets(ns1,100,stdin);
    strcat(ns,ns1);
    printf("%s",ns);
}