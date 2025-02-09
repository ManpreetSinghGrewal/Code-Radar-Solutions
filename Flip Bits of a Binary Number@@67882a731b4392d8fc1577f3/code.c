#include <stdio.h>

unsigned int flipBits(unsigned int num) {
    return ~num;
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    unsigned int flippedNum = flipBits(num);
    printf("%d" ,flippedNum);

    return 0;
}
