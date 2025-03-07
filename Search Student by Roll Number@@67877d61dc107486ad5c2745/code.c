// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>
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
    int a;
    int t;
    char c[99];
    float b; 
    scanf("%d",&b);
    for(int i =0;i<n;i++){
        if(students[i].roll = t){
            a = students[i].roll;
            b = students[i].marks;
            strcpy(c,students[i].name);
        }
    }
    printf("Roll Number: %d, Name: %s, Marks: %.2f",a,c,b);
}