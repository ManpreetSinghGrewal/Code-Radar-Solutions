#include <stdio.h>

int countTrailingZeroes(unsigned int num) {
    if (num == 0) return sizeof(num) * 8;

    int count = 0;
    while ((num & 1) == 0) {
        count++;
        num >>= 1;
    }
    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    int trailingZeroes = countTrailingZeroes(num);
    printf("%d",trailingZeroes);

    return 0;
}
