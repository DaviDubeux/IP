#include <stdio.h>
#include <string.h>
#define tamTexto strlen(texto[i][j])
#define tamPalavra strlen(palavra)

int main(){

    int n, i, j, k, l;
    scanf("%d", &n);

    char texto[n][n][26], palavra[26];
    char achei, valida = 1;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            for (k = 0; k < 26; k++){
                texto[i][j][k] = 0;
            }
        }
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf(" %s", texto[i][j]);
        }
    }

    while (scanf(" %s", palavra) != EOF){
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                
                achei = 0;

                int diferenca = tamTexto - tamPalavra + 1;
                for (k = 0; k < diferenca && !achei; k++){
                    
                    valida = 1;
                    for (l = 0; l < tamPalavra && valida; l++){
                        valida = (texto[i][j][k + l] == palavra[l]) ? 1 : 0;
                        if (l + 1 == tamPalavra && valida){
                            printf("(%d,%d)\n", i, j);
                            achei = 1;
                        }
                    }
                }
            }
        }
    }

    return 0;
}

/*
3
Matheus Boncsidai Guilherme
Selvagem Leonidas atrasar
Renato Todos Mumurilo
ato
idai
Selvagem
Boncsidai
*/