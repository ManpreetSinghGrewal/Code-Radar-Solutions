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
    int k =0;
    float t;
    scanf("%f",&t);
    for(int i =0;i<n;i++){
        if(students[i].marks > t){
            k = k + 1;
        }
    }
    printf("Count of students scoring above %.2f: %d",t,k);
}