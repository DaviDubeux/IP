#include <stdio.h>

int main () {

    int nd, np, x, y, z;;

    scanf("%d", &nd);
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if (nd >= x + y + z) {
        np = 3;
    }
    else if (nd >= x + y || nd >=  x + z || nd >= y + z) {
        np = 2;
    }
    else if (nd >= x || nd >= y || nd >= z) {
        np = 1;
    }
    else {
        np = 0;
    }

    printf("%d", np);

    return 0;
}