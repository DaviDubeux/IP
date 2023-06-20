#include <stdio.h>

int main() {

    int x, n, en1, en2, melhorCanal, min, melhorMinDoCanal, melhorMin;
    int erroAtual = 1, erroPassado = 0, menorErroDoCanal, menorErro, seq1, seq2, seq3, temp;

    scanf("%d", &x);
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        
        scanf("%d %d", &en1, &en2);

        //calcula o menor erro e melhor min pra essa entrada
        for(min = 1; (erroAtual < erroPassado) || (min == 1); min++){
            
            erroPassado = erroAtual;

            if(min == 1) {
                seq1 = en1;
                erroAtual = (x - seq1 >= 0 ? x - seq1 : seq1 - x);
            }
            if(min == 2) {
                seq2 = en2;
                erroAtual = (x - seq2 >= 0 ? x - seq2 : seq2 - x);
            }
            if(min < 2) {
                temp = seq1; seq1 = seq2; seq2 = seq3; seq3 = temp + seq2;
                erroAtual = (x - seq3 >= 0 ? x - seq3 : seq3 - x);
            }

            if(erroPassado<menorErroDoCanal){
                menorErroDoCanal = erroPassado;
                melhorMinDoCanal = min;
            }
        }

        if(menorErroDoCanal<menorErro){
            menorErro = menorErroDoCanal;
            melhorMin = melhorMinDoCanal;
        }
    }

    printf("Xupenio, para ir ao lulupalooza vc deve entrar no canal %d e sera chamado mais ou menos no minuto %d", menorErro, melhorMin);

    return 0;
}