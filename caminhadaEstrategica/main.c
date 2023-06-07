#include <stdio.h>
#include <stdlib.h>
#define passosEmXY printf("%d passo em x e %d passos em y", x, y)
#define passosEmYX printf("%d passo em y e %d passos em x", y, x)

int main() {

    int x, y, c;
    int sx, sy, px, py;

    scanf("%d %d %d", &x, &y, &c);

    sx = x/abs(x); // Sentido de x
    sy = y/abs(y); // Sentido de y

    px = abs(x) + 1;
    py = abs(y) + 1;

    if (x == 0 || y == 0 || (c != 1 && c != 2 && c != 3 && c!= 4)) {
        printf("caminhada invalida");
    }
    else if (((sx == sy) && c%2 == 1)||((sx != sy) && c&2 == 0)) {
        printf("caminhada invalida");
    }
    else if (sx == 1) {
        if (sy == 1) {          // Quadrante 1
            (c == 2) ? passosEmYX : passosEmXY;
        }
        else {                  // Quadrante 4
            (c == 1) ? passosEmXY : passosEmYX;
        }
    } 
    else {
        if (sy == 1) {          // Quadrante 2
            (c == 1) ? passosEmYX : passosEmXY;
        }
        else {                           // Quadrante 3
            (c == 2) ? passosEmXY : passosEmYX;
        }
    }
    return 0;
}