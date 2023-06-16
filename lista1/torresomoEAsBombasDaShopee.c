#include <stdio.h>
#define dento printf("eh dento\n")
#define bomba printf("EH BOMBA TORRESMO\n")
#define comes printf("foi de comes\n")

int main() {

    int d, c1, c2, c3, c4;
    float cb1, cb2, cb3, cb4, m;

    scanf("%d", &d);
    scanf("%d %d %d %d", &c1, &c2, &c3, &c4);

    cb1 = 75/c1;
    cb2 = 50/c2;
    cb3 = 25/c3;
    cb4 = 50/c4;

    m = (cb1 + cb2 + cb3 + cb4)/4;

    if (c1 <= d) {
        (cb1 < m) ? bomba : dento;
    }
    else {
        comes;
    }

    if (c2 <= d) {
        (cb2 < m) ? bomba : dento;
    }
    else {
        comes;
    }

    if (c3 <= d) {
        (cb3 < m) ? bomba : dento;
    }
    else {
        comes;
    }

    if (c4 <= d) {
        (cb4 < m) ? bomba : dento;
    }
    else {
        comes;
    }

    return 0;
}