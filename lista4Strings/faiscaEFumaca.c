#include <stdio.h>
#include <string.h>
#define trocaLed(x) x = (x == 'X') ? 'O' : 'X'

int main() {

    int r, flashs, tamLuzGigante = 0;
    int i, j, k;
    scanf("%d", &r);

    char led[61], saida[r*61];

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

        strcat(saida, led);
        if (i < r-1) strcat(saida, "~");

        printf("%s\n", led);
    }
    
    tamLuzGigante = strlen(saida);
    for (i = 0; i < tamLuzGigante; i++){
        if (saida[i] == '~'){
            if (saida[i-1] == saida[i+1]){
                saida[i] = (i % 2 == 0) ? '@' : '#';
            }
            else{
                saida[i] = (i % 2 == 0) ? '$' : '%';
            }
        }
    }

    printf("%s", saida);

    return 0;
}