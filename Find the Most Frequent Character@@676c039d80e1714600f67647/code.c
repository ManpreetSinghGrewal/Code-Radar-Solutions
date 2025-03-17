#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int mc = 0;
    char mf = '\0';
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (str[i] == '\n') continue;

        int c = 0;
        for (int j = 0; j < length; j++) {
            if (str[j] == '\n') continue;
            if (str[i] == str[j]) {
                c++;
            }
        }
        if (c > mc || (c == mc && str[i] < mf)) {
            mc = c;
            mf = str[i];
        }
    }

    if (mf != '\0') {
        printf("%c", mf);
    } else {
        printf("No valid characters in the string.\n");
    }

    return 0;
}
