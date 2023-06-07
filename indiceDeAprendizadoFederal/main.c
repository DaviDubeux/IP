#include <stdio.h>
#include <math.h>
#define e 2.71

int main() {

    long long int x1, x2, x3, y1, y2, y3;
    int K1, K2, K3;
    float IAF1, IAF2, IAF3;
    char desc1, desc2, desc3;

    scanf("%lld %lld %d\n", &x1, &y1, &K1);
    scanf("%lld %lld %d\n", &x2, &y2, &K2);
    scanf("%lld %lld %d\n", &x3, &y3, &K3);

    IAF1 = ((x1^2)*e/y1);
    IAF2 = ((x2^2)*e/y2);
    IAF3 = ((x3^2)*e/y3);

    if (IAF1 > 512 ) {
        desc1 = 'Sem volta';
    }


    printf("O aluno de índice %d possui valor IAF igual a %.2f e a descrição de %s.", K1, IAF1, desc1);

    return 0;
}