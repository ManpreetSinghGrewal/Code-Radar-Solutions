// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>
struct Toll{
    char np[99];
    char name[99];
    int tax;    
};
int main() {
    int n;
    scanf("%d",&n);
    int ct = 0;
    int tt = 0;
    int bt = 0;
    struct Toll vech[n];
    for(int i =0;i<n;i++){
        scanf("%s %s %d",&vech[i].np,&vech[i].name,&vech[i].tax);
        if(strcmp(vech[i],"Car") == 0){
            ct = ct + vech[i].tax;
        }
        else if(strcmp(vech[i],"Truck") == 0){
            tt = tt + vech[i].tax;
        }
        else{
            bt = bt + vech[i].tax;
        }
    }
    
        printf("Cars: %d, Trucks: %d, Bikes: %d",ct,tt,bt);
        printf("\n");
}