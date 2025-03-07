// Your code here...
// Your code here...
#include <stdio.h>
struct Student{
    int roll;
    char name[99];
    float marks;    
};
int main() {
    int n;
    scanf("%d",&n);
    struct Student students[n];
    for(int i =0;i<n;i++){
        scanf("%d %s %f",&students[i].roll,&students[i].name,&students[i].marks);
    }
    float sum = 0.00;
    for(int i =0;i<n;i++){
        sum = sum + students[i].marks;
    }
    float average = sum / n;
    printf("Total Marks : %d \nAverage Marks: %.2f",sum, average);
}