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
    int ct = 0;
    int tt = 0;
    int bt = 0;
    struct Toll vech[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%s %s %d", vech[i].np, vech[i].name, &vech[i].tax);  // Corrected line
        if (strcmp(vech[i].name, "Car") == 0) {  // Using strcmp for string comparison
            ct = ct + vech[i].tax;
        } else if (strcmp(vech[i].name, "Truck") == 0) {
            tt = tt + vech[i].tax;
        } else {
            bt = bt + vech[i].tax;
        }
    }
    
    printf("Cars: %d, Trucks: %d, Bikes: %d\n", ct, tt, bt);
    
    return 0;
}
