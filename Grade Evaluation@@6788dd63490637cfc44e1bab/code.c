#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%d",&a);
    switch (a) {
        case A:
            printf("Excellent");
            break;
        case B:
            printf("Good");
            break;
        case C;
            printf("Average");
            break;
        case D;
            printf("Below Average");
            break;
    }
    return 0;
}