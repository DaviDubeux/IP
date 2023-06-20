#include <stdio.h>

int main() {

    int x, n, e1, e2, menorErro, erro, min, s0, s1, s2, temp;

    scanf("%d", &x);
    scanf("%d", &n);

    for(int i = 1; i<= n; i++){

        scanf("%d %d", &e1, &e2);

        for(min = 1; menorErro < erro; min++){

            if (min == 1) {
                s0 = e1;
                erro = menorErro;
                menorErro = (x - e1 >= 0 ? x - e1 : e1 - x);

            }else if (min == 2) {
                s1 = e2;
                erro = menorErro;
                menorErro = (x - e2 >= 0 ? x - e1 : e2 - x);

            }else if (min == 3) {
                s2 = s1 + s0;
                erro = menorErro;
                menorErro = (x - s2 >= 0 ? x - s2 : s2 - x);
            }else if (min > 3) {
                erro = menorErro;
                menorErro = (x - e2 >= 0 ? x - e1 : e2 - x);

            }
        }

    }


    return 0;
}