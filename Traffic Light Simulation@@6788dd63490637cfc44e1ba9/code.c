#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c".&a);
    switch (a) {
        case 'R' :
        printf("Stop");
        break;
        case 'G' :
        printf("Go");
        break;
        case 'Y' :
        printf("Go Slow");
        break;
    }
    return 0;
}