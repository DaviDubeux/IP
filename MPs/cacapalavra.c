#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int n, tamanhoDaPalavra, sentido, iINicial, iFinal, jINicial, jFinal;
    int sX[8] = {1, 1, 0, -1, -1, -1, 0, 1}; //sentidos no eixo X
    int sY[8] = {0, 1, 1, 1, 0, -1, -1, -1}; //sentidos no eixo Y
    scanf("%d", &n);

    char cacapalavra[n][n], palavra[n], posValida = 1, palavraEscrita = 0;
    int i, j, letras = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cacapalavra[i][j] = '~';
        }
    } //limpa o cacapalavra

    scanf(" %s", palavra);
    while(strcmp(palavra, ".") != 0){

        tamanhoDaPalavra = strlen(palavra);
        sentido = rand() % 8;

        // escolhe uma posicao valida pra comecar a palavra
        do{
            iINicial = rand() % n;
            iFinal = iINicial + sY[sentido]*tamanhoDaPalavra;
            jINicial = rand() % n;
            jFinal = jINicial + sX[sentido]*tamanhoDaPalavra;

        } while (iFinal < 0 || iFinal > n || jFinal < 0 || jFinal > n);

        // atualiza o caractere pela letra da palavra
        for (int k = 0; k < tamanhoDaPalavra; k++){
            if (cacapalavra[iINicial + sY[sentido]*k][jINicial + sX[sentido]*k] == '~'){
                cacapalavra[iINicial + sY[sentido]*k][jINicial + sX[sentido]*k] = palavra[k];
            }
        }
        scanf(" %s", palavra);

    }

    //printa antes de por as letras de preenchimento (caso queira testar na correcao)
    printf("\n");

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%c ", cacapalavra[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    // preenche os espacos em branco do cacapalavra
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (cacapalavra[i][j] == '~'){
                cacapalavra[i][j] = rand() % 26 + 65;
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%c ", cacapalavra[i][j]);
        }
        printf("\n");
    }

    return 0;
}