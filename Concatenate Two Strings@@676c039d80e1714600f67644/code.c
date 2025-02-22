#include <stdio.h>
#include <string.h>

int main() {
    char ns[100];
    char ns1[100];
    fgets(ns, sizeof(ns), stdin);
    fgets(ns1, sizeof(ns1), stdin);
    ns[strcspn(ns, "\n")] = 0;
    ns1[strcspn(ns1, "\n")] = 0;

    strcat(ns, ns1);
    printf("%s\n", ns);

    return 0;
}
