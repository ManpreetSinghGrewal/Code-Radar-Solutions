// Your code here...
#include <stdio.h>
#include <string.h>
struct Temp{
    char day[99];
    int temp;
};
int main(){
    int sum = 0;
    struct Temp temper[7];
    for(int i = 0;i<7;i++){
        scanf("%s %d",&temper[i].day,&temper[i].temp);
        sum = sum + temper[i].temp;
    }
    float average = sum/7;
    printf("Average Temperature: %.2f",average);

}