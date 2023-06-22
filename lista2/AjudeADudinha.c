#include <stdio.h>
#define jDivMaisDeUmaVez ((i/j) % j == 0)

int main() {

    int n, k, p, q = 0;
    int primeiroI = 0;
    int divisoresDeJ, divisoresPrimosImparesDistintosDeI;
    int i, j, l;

    scanf("%d %d %d", &n, &k, &p);

    for(i = n; i < k; i++){ //analisa o I

        divisoresPrimosImparesDistintosDeI = 0;

        for(j = 3; j<=i/2 ; j++){ // analisa o divisor de I (J)

            divisoresDeJ = 1;

            // analisa se j é primo
            for(l = 1; l<=j/2; l++){
                if(j%l == 0) divisoresDeJ++;
            }

            if(jDivMaisDeUmaVez && j != 1) break;

            // analisa se bate com as condições de q
            if(divisoresDeJ == 2 && i%j == 0 && !jDivMaisDeUmaVez) divisoresPrimosImparesDistintosDeI++;
        }
        if (divisoresPrimosImparesDistintosDeI == p){
            if(primeiroI == 0) primeiroI = i;
            else q++;
        }
    }

    if (primeiroI != 0) printf("%d %d", primeiroI, q);
    else printf("Poxa dudinha, me desculpa, nao achei os numeros mas vou te mandar uma foto de um gatinho fofo.");

    return 0;
}