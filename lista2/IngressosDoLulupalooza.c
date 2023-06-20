#include <stdio.h>

int main() {

    int x, n, en1, en2, melhorCanal, min, melhorMin, vip;
    int erroAtual, erroPassado, menorErro, seq1 = 0, seq2 = 0, seq3 = 0, temp;

    scanf("%d", &x);
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){ //calcula o melhor canal
        
        printf("----------\n");
        scanf("%d %d", &en1, &en2);

        min = 1;
        erroAtual = 0; erroPassado = 0;
        seq1 = 0; seq2 = 0; seq3 = 0;

        // calcula o menor erro e melhor min pra essa entrada
        while(erroAtual<=erroPassado || erroAtual == 0 || erroPassado == 0){

            erroPassado = erroAtual;

            if(min == 1) {
                seq1 = en1;
                erroAtual = (x - seq1 >= 0 ? x - seq1 : seq1 - x);
            }
            if(min == 2) {
                seq2 = en2;
                erroAtual = (x - seq2 >= 0 ? x - seq2 : seq2 - x);
            }
            if(min == 3) {
                seq3 = seq1 + seq2;
                erroAtual = (x - seq3 >= 0 ? x - seq3 : seq3 - x);
            }
            if(min > 3) {
                temp = seq2; seq2 = seq3; seq3 = seq3 + temp;
                erroAtual = (x - seq3 >= 0 ? x - seq3 : seq3 - x);
            }

            printf("erroAtual: %d  erroPassado: %d || seq1: %d  seq2: %d  seq3: %d  \n", erroAtual, erroPassado, seq1, seq2, seq3);

            if(erroAtual<menorErro || (i==1 && min == 1)){

                menorErro = erroAtual;
                melhorCanal = i;
                melhorMin = min;
                printf("Menor erro: %d ", menorErro);

                vip = 0;
                
                if(seq3 == 0){
                    if(seq2 == 0){
                        temp = seq1;
                    }
                    else{
                        temp = seq2;
                    }
                }
                else{
                    temp = seq3;
                }

                while(temp>0){
                    vip += temp % 10;
                    temp /= 10;
                    printf("vip: %d /", vip);
                }
                printf("\n");
            }

            min++;
        }
    }

    printf("Menor erro de todos: %d\n", menorErro);
    printf("Vip: %d\n", vip);
    printf("Xupenio, para ir ao lulupalooza vc deve entrar no canal %d e sera chamado mais ou menos no minuto %d", melhorCanal, melhorMin);
    if(vip>10) printf(" e com o VIP garantido!!!\n");
    else printf(", mas o ingresso VIP não vai rolar :(\n");

    // printf(" e com o VIP garantido!!!\n");
    // printf(", mas o ingresso VIP não vai rolar :(\n");

    return 0;
}