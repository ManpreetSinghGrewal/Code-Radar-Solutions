#include <stdio.h>
#include <limits.h> // for CHAR_BIT

int countLeadingZeroes(unsigned int num) {
    if (num == 0) return sizeof(num) * CHAR_BIT;
    
    int count = 0;
    unsigned int mask = 1 << (sizeof(num) * CHAR_BIT - 1);
    
    while ((num & mask) == 0) {
        count++;
        mask >>= 1;
    }
    
    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    int leadingZeroes = countLeadingZeroes(num);
    printf("%d", leadingZeroes);

    return 0;
}
