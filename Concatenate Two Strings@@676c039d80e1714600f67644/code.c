#include <stdio.h>
#include <string.h>

int main() {
    char ns[100];
    char ns1[100];

    printf("Enter the first string:\n");
    // Read the first string including spaces
    fgets(ns, sizeof(ns), stdin);

    printf("Enter the second string:\n");
    // Read the second string including spaces
    fgets(ns1, sizeof(ns1), stdin);

    // Remove the newline character added by fgets
    ns[strcspn(ns, "\n")] = 0;
    ns1[strcspn(ns1, "\n")] = 0;

    strcat(ns, ns1);
    printf("%s\n", ns);

    return 0;
}
