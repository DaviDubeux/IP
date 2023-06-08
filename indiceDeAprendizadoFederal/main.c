#include <stdio.h>
#include <stdlib.h>
#define e 2.71

int main() {

    long long int x1, y1, x2, y2, x3, y3;
    float IAF1, IAF2, IAF3;
    int k1, k2, k3;

    scanf("%lld %lld %d", &x1, &y1, &k1);
    scanf("%lld %lld %d", &x2, &y2, &k2);
    scanf("%lld %lld %d", &x3, &y3, &k3);

    if (IAF1 < 0) IAF1 = (-1)*(x1*x1*e/y1);
    else IAF1 = x1*x1*e/y1;
    if (IAF2 < 0) IAF2 = (-1)*(x2*x2*e/y2);
    else IAF2 = x2*x2*e/y2;
    if (IAF3 < 0) IAF3 = (-1)*(x3*x3*e/y3);
    else IAF3 = x3*x3*e/y3;

    if (IAF1 > 512) 
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Sem volta\n", k1, IAF1);
    else if (IAF1 >= 256) 
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Conserta impressoras\n", k1, IAF1);
    else if (IAF1 >= 128)
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Matemático Discreto\n", k1, IAF1);
    else if (IAF1 >= 64) 
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Morador do Grad\n", k1, IAF1);
    else if (IAF1 >= 32.5) 
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Iniciado\n", k1, IAF1);
    else if (IAF1 < 32.5)
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Calouro\n", k1, IAF1);

    if (IAF2 > 512) 
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Sem volta\n", k2, IAF2);
    else if (IAF2 >= 256) 
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Conserta impressoras\n", k2, IAF2);
    else if (IAF2 >= 128)
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Matemático Discreto\n", k2, IAF2);
    else if (IAF2 >= 64) 
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Morador do Grad\n", k2, IAF2);
    else if (IAF2 >= 32.5) 
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Iniciado\n", k2, IAF2);
    else if (IAF2 < 32.5)
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Calouro\n", k2, IAF2);

    if (IAF3 > 512) 
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Sem volta\n", k3, IAF3);
    else if (IAF3 >= 256) 
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Conserta impressoras\n", k3, IAF3);
    else if (IAF3 >= 128)
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Matemático Discreto\n", k3, IAF3);
    else if (IAF3 >= 64) 
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Morador do Grad\n", k3, IAF3);
    else if (IAF3 >= 32.5) 
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Iniciado\n", k3, IAF3);
    else if (IAF3 < 32.5)
        printf("O aluno de índice %d possui o valor IAF igual a %.2f e a descrição de Calouro\n", k3, IAF3);

    return 0;
}