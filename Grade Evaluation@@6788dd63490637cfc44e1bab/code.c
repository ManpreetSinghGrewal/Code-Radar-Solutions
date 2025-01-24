#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%d",&a);
    switch(a){
        case 'A':
            printf("Excellent");
        case 'B':
            printf("Good");
        case 'C';
            printf("Average");
        case 'D';
            printf("Below Average");
    }
    return 0;
}