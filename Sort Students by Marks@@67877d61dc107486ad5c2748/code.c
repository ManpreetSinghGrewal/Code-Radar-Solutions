// Your code here...
#include <stdio.h>
#include <string.h>
struct Student{
    int roll;
    char name[99];
    float marks;    
};
void bubbleSort(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) { 
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    struct Student students[n];
    for(int i =0;i<n;i++){
        scanf("%d %s %f",&students[i].roll,&students[i].name,&students[i].marks);
    }
    bubbleSort(students,n);
    for(int i =0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f",students[i].roll,students[i].name,students[i].marks);
        printf("\n");
    }
}