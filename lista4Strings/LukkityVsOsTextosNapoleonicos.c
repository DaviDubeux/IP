#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define comecou texto[i] == '['
#define numero '0' <= texto[i] && texto[i] <= '9'
#define hifen texto[i] == '-'
#define terminou texto[i] == ']'

int main() {

    int i, j, tamPalavra, minusculas;
    char texto[501], letra[2] = {0,0}, palavraDecodificada[100], lendo;
    scanf(" %500[^\n]", texto);

    memset(palavraDecodificada, 0, sizeof(palavraDecodificada));

    letra[0] = 0, minusculas = 0;
    for (i = 0; i < 500 && texto[i] != '\0'; i++){
        if (comecou){
            lendo = 1;
        }
        else if (numero && lendo){ //Atualiza quanto vale a letra
            letra[0] *= 10;
            letra[0] += texto[i] - 48;

        }else if (hifen && lendo){ //Decodifica o número em letra e adiciona a letra na palavra
            strcat(palavraDecodificada, letra);
            letra[0] = 0;

        }else if (terminou && lendo){//Transforma a palavra em toupper ou tolower e printa ela na string

            tamPalavra = strlen(palavraDecodificada);
            for (j = 0; j < tamPalavra ; j++){
                minusculas += (palavraDecodificada[j] >= 'a') ? 1 : 0;
            }
            if (2*minusculas > tamPalavra) { //Se tiver mais maisculas na palavra, faz tolower, se não, faz toupper
                for (j = 0; j < tamPalavra; j++){
                    palavraDecodificada[j] = tolower(palavraDecodificada[j]);
                }
            }
            else{
                for (j = 0; j < tamPalavra; j++){
                    palavraDecodificada[j] = toupper(palavraDecodificada[j]);
                }
            }

            minusculas = 0;
            printf("%s", palavraDecodificada);
            memset(palavraDecodificada, 0, sizeof(palavraDecodificada));
            lendo = 0;
        }
        else{
            printf("%c", texto[i]);
        }
    }

    return 0;
}
