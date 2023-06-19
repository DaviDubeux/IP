#include <stdio.h>
#include <stdlib.h>
#define e 2.71

int main() {

    long int x1, y1, x2, y2, x3, y3;
    int k1, k2, k3;
    long double IAF1, IAF2, IAF3;

    scanf("%ld %ld %d", &x1, &y1, &k1);
    scanf("%ld %ld %d", &x2, &y2, &k2);
    scanf("%ld %ld %d", &x3, &y3, &k3);

    IAF1 = ((y1 != 0) ? (x1*x1*e)/y1 : 0);
    IAF1 = ((IAF1 < 0) ? IAF1*(-1) : IAF1);

    IAF2 = ((y2 != 0) ? (x2*x2*e)/y2 : 0);
    IAF2 = ((IAF2 < 0) ? IAF2*(-1) : IAF2);

    IAF3 = ((y3 != 0) ? (x3*x3*e)/y3 : 0);
    IAF3 = ((IAF3 < 0) ? IAF3*(-1) : IAF3);

    if      (IAF1 > 512)  printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Sem volta.\n", k1, IAF1);
    else if (IAF1 >= 256) printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Conserta Impressoras.\n", k1, IAF1);
    else if (IAF1 >= 128) printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Matemático Discreto.\n", k1, IAF1);
    else if (IAF1 >= 64)  printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Morados do Grad.\n", k1, IAF1);
    else if (IAF1 >= 32.5)printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Iniciado.\n", k1, IAF1);
    else if (IAF1 < 32.5) printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Calouro.\n", k1, IAF1);

    if      (IAF2 > 512)  printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Sem volta.\n", k2, IAF2);
    else if (IAF2 >= 256) printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Conserta Impressoras.\n", k2, IAF2);
    else if (IAF2 >= 128) printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Matemático Discreto.\n", k2, IAF2);
    else if (IAF2 >= 64)  printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Morados do Grad.\n", k2, IAF2);
    else if (IAF2 >= 32.5)printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Iniciado.\n", k2, IAF2);
    else if (IAF2 < 32.5) printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Calouro.\n", k2, IAF2);

    if      (IAF3 > 512)  printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Sem volta.\n", k3, IAF3);
    else if (IAF3 >= 256) printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Conserta Impressoras.\n", k3, IAF3);
    else if (IAF3 >= 128) printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Matemático Discreto.\n", k3, IAF3);
    else if (IAF3 >= 64)  printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Morados do Grad.\n", k3, IAF3);
    else if (IAF3 >= 32.5)printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Iniciado.\n", k3, IAF3);
    else if (IAF3 < 32.5) printf("O aluno de índice %d possui o valor IAF igual a %.2Lf e a descrição de Calouro.\n", k3, IAF3);

    return 0;
}