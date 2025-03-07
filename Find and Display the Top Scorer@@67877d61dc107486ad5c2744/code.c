// Your code here...
#include <stdio.h>
#include <string.h>
struct Student{
    int roll;
    char name[88];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Student students[n];
    for(int i= 0;i<n;i++){
        scanf("%d %s %f",&students[i].roll,&students[i].name,&students[i].marks);
    }
    arr greatest [3];
    float greater = 0.00;
    for(int i= 0;i<n;i++){
        if(greater < students[i].marks ){
            greatest = students[i];
        }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",greatest.roll,greatest.name,greatest.marks);
    }

}