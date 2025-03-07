// Your code here...
#include <stdio.h>
#include <string.h>
struct Book{
    char X[99];
    char Y[99];
    float Z;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Book books[n];
    for(int i =0;i<n;i++){
        scanf("%s %s %f",&books[i].X,&books[i].Y,&books[i].Z);
    }
    float t;
    scanf("%d",&t);
    printf("Books above price %.2f",t);
    printf("\n");
    for(int i =0;i<n;i++){
        if(books[i].Z > t){
            printf("Title: %s, Author: %s, Price: %.2f",books[i].X,books[i].Y,books[i].Z);
        }printf("\n");
    }
}
