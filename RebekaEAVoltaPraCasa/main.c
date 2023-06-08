#include <stdio.h>
#include <stdlib.h>
#define naoAjudou printf("Nao foi dessa vez que Rebeka pode ajudar...\n")
#define conseguiu printf("Ela conseguiu! Rebeka voltou pra casa e apanhou da mae por sumir noite pasada!\n")
#define andou printf("E parece que Rebeka vai ter que voltar andando...\n")
#define cadaHomem printf("Cada homem ficou com %f, %f e %f reais, respectivamente\n", a, b, c)

int main() {

    int t, x, y, z, r;
    float a, b, c;
    char char1, char2, char3;

    scanf("%d %d %d %d", &t, &x, &y, &z);

    a = t*x/100;
    b = t*y/100;
    c = t*z/100;

    r = t - t*(x + y + z)/100;
    
    if (a == abs(a) && b == (abs(b)) && (c == abs(c))) { //Nao investiu nada
        cadaHomem;
        (r >= 4) ? conseguiu : andou;
    }
    else {                                               //Investiu 1
        a = (t + 1)*x/100;
        b = (t + 1)*y/100;
        c = (t + 1)*z/100;

        r = (t + 1) - (t + 1)*(x + y + z)/100;

        if (a == abs(a) && b == (abs(b)) && (c == abs(c) && r > 1)) {
            cadaHomem;
            (r >= 5) ? conseguiu : andou;           
        }
        else {                                           //Investiu 2
            a = (t + 2)*x/100;
            b = (t + 2)*y/100;
            c = (t + 2)*z/100;

            r = (t + 2) - (t + 2)*(x + y + z)/100;

            if (a == abs(a) && b == (abs(b)) && c == abs(c) && r > 2) {
                cadaHomem;
                (r >= 6) ? conseguiu : andou;           
            }
            else {                                      //Investiu 3
                a = (t + 3)*x/100;
                b = (t + 3)*y/100;
                c = (t + 3)*z/100;

                r = (t + 3) - (t + 3)*(x + y + z)/100;

                if (a == abs(a) && b == (abs(b)) && c == abs(c) && r > 3) {
                    cadaHomem;
                    (r >= 7) ? conseguiu : andou;           
                }
                else {                                 //Nao deu pra investir
                    naoAjudou;
                }
            }
        }
    }
    return 0;
}