// Your code here...
#include <stdio.h>
#include <string.h>

struct Toll {
    char np[99];
    char name[99];
    int tax;    
};

int main() {
    int n;
    scanf("%d", &n);
    float st = 0;
    float pr = 0;
    float vip = 0;
    struct Toll vech[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%s %s %d", vech[i].np, vech[i].name, &vech[i].tax);  // Corrected line
        if (strcmp(vech[i].name, "Standard") == 0) {  // Using strcmp for string comparison
            st = st + vech[i].tax;
        } else if (strcmp(vech[i].name, "Premium") == 0) {
            pr = pr + vech[i].tax;
        } else {
            vip =vip + vech[i].tax;
        }
    }
    
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f\n",st,pr,vip);
    
    return 0;
}
