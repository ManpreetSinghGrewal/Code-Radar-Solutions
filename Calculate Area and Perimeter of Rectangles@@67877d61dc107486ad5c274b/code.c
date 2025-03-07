// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>
struct Rectangle{
    int l;
    int b;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Rectangle rectangles[n];
    for(int i = 0;i<n;i++){
        scanf("%d %d",&rectangles[i].l,&rectangles[i].b);
    }
    for(int i = 1;i<=n;i++){
        float area = rectangles[i-1].l * rectangles[i-1].b;
        float perimeter = 2 * (rectangles[i-1].l + rectangles[i-1].b)
        printf("Rectangle %d: Area = %.2f, Perimeter = ",i,area,perimeter);
        printf("\n");
    }
    
    
    
}