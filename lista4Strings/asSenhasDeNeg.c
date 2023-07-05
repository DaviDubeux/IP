#include <stdio.h>
#include <string.h>
#define tam 1000
#define numero ('0' <= senhas[i][j] && senhas[i][j] <= '9')
#define letraCod ('A' <= senhas[i][j] && senhas[i][j] <= 'F')
#define letraNaoCod ('G' <= senhas[i][j] && senhas[i][j] <= 'Z')

int main() {

    int n, soma = 0;
    char valida = 1;
    scanf("%d", &n);

    char senhas[n][tam], saida[n*tam];

    strcpy(saida, "");

    for (int i = 0; i < n; i++){
        scanf(" %1000[^\n]", senhas[i]);
    }

    for (int i = 0; i < n && valida; i++){
        for (int j = 0; j < tam && (senhas[i][j] != '\0') && valida; j++){
            if (numero || letraCod){
                switch (senhas[i][j])
                {
                case '0': senhas[i][j] = '6'; break;
                case '1': senhas[i][j] = '7'; break;
                case '2': senhas[i][j] = '9'; break;
                case '3': senhas[i][j] = '8'; break;
                case '4': senhas[i][j] = 'A'; break;
                case '5': senhas[i][j] = '2'; break;
                case '6': senhas[i][j] = 'B'; break;
                case '7': senhas[i][j] = 'F'; break;
                case '8': senhas[i][j] = '1'; break;
                case '9': senhas[i][j] = 'C'; break;
                case 'A': senhas[i][j] = '0'; break;
                case 'B': senhas[i][j] = 'D'; break;
                case 'C': senhas[i][j] = 'E'; break;
                case 'D': senhas[i][j] = '3'; break;
                case 'E': senhas[i][j] = '5'; break;
                case 'F': senhas[i][j] = '4'; break;
                default: break;
                }
            }
            else if (!letraNaoCod){
                valida = 0;
            }

        }
    }

    if (valida){
        for (int i = 0; i < n; i++){
            strcat(saida, "-");
            strcat(saida, senhas[i]);
        }

        for (int i = 0; saida[i] != '\0'; i++){
            soma += (saida[i] == '-') ? 0 : 1;
        }
        
        printf("%s %d", saida, soma);
    }
    else{
        printf("Alguma senha eh invalida!");
    }

    return 0;
}