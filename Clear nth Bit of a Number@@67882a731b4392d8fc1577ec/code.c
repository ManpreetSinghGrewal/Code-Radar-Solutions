#include <stdio.h>

#include <stdio.h>

int clearNthBit(int num, int n) {
    return num & ~(1 << n);
}

int main() {
    int num, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position: ");
    scanf("%d", &n);

    int result = clearNthBit(num, n);
    printf("%d",result);

    return 0;
}
