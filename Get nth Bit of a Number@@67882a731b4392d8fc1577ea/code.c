#include <stdio.h>

int getNthBit(int num, int n) {
    return (num >> n) & 1;
}

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);

    int bit = getNthBit(num, n);
    printf("%d", bit);

    return 0;
}
