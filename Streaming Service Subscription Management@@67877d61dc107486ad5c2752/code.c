// Your code here...
#include <stdio.h>
#include <string.h>
struct Subs{
    char name[99];
    char type[99];
    float price;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Subs persons[n];
    for(int i =0;i<n;i++){
        scanf("%s %s %f",&persons[i].name,&persons[i].type,&persons[i].price);
    }
    int b = 0;
    float br = 0.0;
    int s = 0;
    float sr = 0.0;
    int p = 0;
    float pr = 0.00;
    for(int i =0;i<n;i++){
        if(strcmp(persons[i].type ,"Basic")==0){
            b++;
            br = br + persons[i].price;
        }
        else if(strcmp(persons[i].type ,"Standard")==0){
            s++;
            sr = sr + persons[i].price;
        }
        else{
            p++;
            pr = pr + persons[i].price;
        }
    }
    printf("Basic: %d Users, Revenue: %f; Standard: %d Users, Revenue: %f; Premium: %d Users, Revenue: %f",b,br,s,sr,p,pr);



}