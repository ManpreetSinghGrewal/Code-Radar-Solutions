// Your code here...
// Your code here...
#include <stdio.h>
struct Employee{
    int id;
    char name[99];
    float bonus;    
};
int main() {
    int n;
    scanf("%d",&n);
    struct Employee employees[n];
    for(int i =0;i<n;i++){
        scanf("%d %s %f",&employees[i].id,&employees[i].name,&employees[i].bonus);
    }
    for(int i =0;i<n;i++){
        printf("Employee ID: %d, Name: %s, Bonus: %f",employees[i].id,employees[i].name,employees[i].bonus);
        printf("\n");
    }
}