#include <stdio.h>
#define deuBom printf("O uninho faz a boa, obrigado querida mae line\n")
#define naoDeuBom printf("Infelizmente o uninho nao tanka, rodamos!\n")

int main() {

    float Hi, Hv, P; // Hora de ida, hora de volta e o prazo
    char L; // Lugar que as pessoas vao
    int N; // numero de pessoas

    scanf("%f %f %c %d", &Hi, &Hv, &L, &N);

    P = Hv - Hi;

    if (Hi < 0 || Hi >= 24 || Hv < 0 || Hv >= 24 || Hi > Hv||N <= 0) {
        printf("Entrada invalida\n");
    }
    else if (L == 'A') {
        if (P >= 1.5) {
                (N <= 9) ? deuBom : naoDeuBom;
        }
        else if (P > 1) {
            (N <= 5) ? deuBom : naoDeuBom;
        }
        else {
            naoDeuBom;
        }
    }
    else if (L == 'B') {
        if (P >= 1.125) {
            (N <= 9) ? deuBom : naoDeuBom;
        }
        else if (P > 0.75) {
            (N <= 5) ? deuBom : naoDeuBom;
        }
        else {
            naoDeuBom;
        }        
    }
    else{
        printf("Entrada invalida\n");
    }

    return 0;
}

