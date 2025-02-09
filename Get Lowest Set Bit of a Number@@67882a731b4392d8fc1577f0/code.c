#include <stdio.h>

int getLowestSetBit(int num) {
    return num & -num;
}

int main() {
    int num;
    scanf("%d", &num);

    int lowestSetBit = getLowestSetBit(num);
    printf("%d",lowestSetBit);

    return 0;
}
