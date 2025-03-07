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
    float greater = 0.00;
    float a = 0.00;
    char b[88];
    int c = 0;
    for(int i= 0;i<n;i++){
        if(greater < students[i].marks ){
            a = students[i].marks;
            strcpy(b,students[i].name);
            c = students[i].roll;
        }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",c,b,a);
    }

}