#include <stdio.h>

void deciToBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }
    
    int binaryNum[32];
    int i = 0;
    
    while (num > 0) {
        binaryNum[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);
    deciToBinary(num);
    
    return 0;
}
