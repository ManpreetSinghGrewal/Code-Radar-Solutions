// Your code here...
// Your code here...
#include <stdio.h>
struct Toll{
    char np[99];
    char name[99];
    int tax;    
};
int main() {
    int n;
    scanf("%d",&n);
    float ct = 0;
    float tt = 0;
    float bt = 0;
    struct Toll vech[n];
    for(int i =0;i<n;i++){
        scanf("%s %s %d",&vech[i].np,&vech[i].name,&vech[i].tax);
        if(vech[i].name == "Car"){
            ct = ct + vech[i].tax;
        }
        else if(vech[i].name == "Truck"){
            tt = tt + vech[i].tax;
        }
        else(vech[i].name =="Bike"){
            bt = bt + vech[i].tax;
        }
    }
    for(int i =0;i<n;i++){
        printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",ct,tt,bt);
        printf("\n");
    }
}