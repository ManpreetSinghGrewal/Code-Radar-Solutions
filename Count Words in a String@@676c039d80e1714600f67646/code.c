#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);

    int sum = 0;
    int i = 0;
    
    while (str[i] == ' ') {
        i++;
    }

    if (str[i] == '\0' || str[i] == '\n') {
        printf("0\n");
        return 0;
    }

    for (; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' ) {
            sum = sum + 1;
        }
    }

    printf("%d\n", sum + 1);

    return 0;
}
