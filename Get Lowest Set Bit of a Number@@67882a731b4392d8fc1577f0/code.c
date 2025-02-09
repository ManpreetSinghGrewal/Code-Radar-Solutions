#include <stdio.h>

int getLowestSetBitPosition(int num) {
    if (num == 0) return -1; // No set bit found
    int position = 0;
    while (!(num & 1)) {
        num >>= 1;
        position++;
    }
    return position;
}

int main() {
    int num;
    scanf("%d", &num);

    int position = getLowestSetBitPosition(num);
    if (position == -1) {
        printf("No set bit found.\n");
    } else {
        printf("%d", position);
    }

    return 0;
}

