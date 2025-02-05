#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

#include <stdio.h>

void print_diamond(int n) {
    // Print upper half of the diamond
    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    // Print lower half of the diamond
    for (int i = n - 2; i >= 0; i--) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_diamond(n);
    return 0;
}