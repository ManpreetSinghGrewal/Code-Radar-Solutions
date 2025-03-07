// Your code here...
#include <stdio.h>
#include <string.h>
struct Student{
    int roll;
    float marks;
    char name[99];
};
int main(){
    int n;
    scanf("%d",&n);
    struct Student students[n];
    for(int i =0;i<n;i++){
        scanf("%d %s %f",students[i].roll,students[i].name,students[i].marks);
    }
    int mroll;
    float mmarks;
    char mname[99];
    float minimum = 99.99;
    for(int i =0;i<n;i++){
        if(students[i].marks < minimum){
            mroll = students[i].roll;
            strcpy(mname,students[i].name);
            mmarks = students[i].marks;
        }
    }
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %f",mroll,mname,mmarks);
    
    
}