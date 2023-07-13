#include <stdio.h>
#include <string.h>
#define ultimoLed strlen(saida[i]) - 1
#define trocaLed(x) x = (x == 'X') ? 'O' : 'X'

int main() {

    int r, flashs, tamLuzGigante = 0;
    int i, j, k;
    scanf("%d", &r);

    char led[61], saida[r][61], ornamento;

    memset(saida, 0, sizeof(saida));

    for (i = 0; i < r; i++){
        scanf(" %s %d", led, &flashs);

        for (j = 0; j < flashs; j++){
            trocaLed(led[0]); // se for X vira O e se for O vira X

            int tamLed = strlen(led);
            if (tamLed > 1){
                // Enquanto o anterior tiver desligado, troca o led
                for(k = 1; k < tamLed && led[k-1] == 'X'; k++){
                    trocaLed(led[k]); 
                }
            }
        }   

        strcpy(saida[i], led);

        printf("%s\n", saida[i]);
    }

    tamLuzGigante = strlen(saida[0]);
    printf("%s", saida[0]);
    
    for (i = 1; i < r && r > 1; i++){

        tamLuzGigante += (1 + strlen(saida[i]));

        if (saida[i - 1][ultimoLed] == saida[i][0]){
            ornamento = (tamLuzGigante % 2 == 0) ? '@' : '#'; 
            printf("%c", ornamento);
        }
        else{
            ornamento = (tamLuzGigante % 2 == 0) ? '$' : '%'; 
            printf("%c", ornamento);
        }

    printf("%s", saida[i]);

    }    

    return 0;
}