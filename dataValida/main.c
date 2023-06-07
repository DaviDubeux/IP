#include <stdio.h>
#define deuBom printf("valida")
#define naoDeuBom printf("invalida")

int main() {

    int d, m, a;

    scanf("%d %d %d", &d, &m, &a);

    if (d < 1 || d > 31 || m < 1 || m > 12 || a < 1 || (d == 29 && m == 2 && a%100 == 0 && a&400 != 0)) { //Casos invalidos gerais
        naoDeuBom;
    }
    else if (d == 29 && m == 2 && a%4 == 0) { //Ano bissexto
        deuBom;
    }
    else if (m == 2 && d > 28) { //Fevereiro
        naoDeuBom;
    }
    else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) { //Meses com 30 dias
        naoDeuBom;
    }
    else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d > 31) { //Meses com 31 dias
        naoDeuBom;
    }
    else { // Casos validos (resto)
        deuBom; 
    }
    return 0;
}