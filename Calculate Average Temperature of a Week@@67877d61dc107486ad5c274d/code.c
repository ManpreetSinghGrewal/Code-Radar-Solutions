// Your code here...
#include <stdio.h>
int main(){
    printf("hloo");
    int sum = 0;
    for (int i = 0;i<7;i++){
        int a;
        char day[99];
        scanf("%s %d",&day,&a);
        sum = sum + a;
    }
    int average = sum/7;
    printf("Average Temperature: %.2f",average);

}