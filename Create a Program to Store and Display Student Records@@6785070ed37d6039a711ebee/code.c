// Your code here...
#include <stdio.h>
int main() {
    struct student{
        int roll ;
        char name[99];
        float marks;
    }
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        struct student [i];
        scanf("%d",&student[i].roll);
    }
    for(int i=1;i<=n;i++){
        printf("%d", student[i].roll);
    }
    
}