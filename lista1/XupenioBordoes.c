#include <stdio.h>

int main() {

    int n, a, b, soma, somaN, somaA, somaB, somaAB;

    scanf("%d", &n);
    scanf("%d %d", &a, &b);

    somaN = (n*(n + 1)/2);
    somaA = ((n/a)*((n/a) + 1)/2)*a;
    somaB = ((n/b)*((n/b) + 1)/2)*b;
    somaAB = ((n/(a*b))*((n/(a*b)) + 1)/2)*a*b;


    soma = somaN - somaA - somaB + somaAB;

    printf("%d\n", soma);

    (soma % 2 == 0) ? printf("Lá ele!!!") : printf("Opa xupenio AULAS...");

    return 0;
}