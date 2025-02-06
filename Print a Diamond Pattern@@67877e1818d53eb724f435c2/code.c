#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

#include <stdio.h>

void print_diamond(int n) {
    // Print upper half of the diamond
    int n = 0;
    for (int i = 1; i <= n; i++) {
        for(int j = 1;j<n;j++){
            printf("*");
            n = n + 3;
        }
    }

    // Print lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    print_diamond(n);
    return 0;
}

