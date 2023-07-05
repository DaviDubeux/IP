#include <stdio.h>
#include <string.h>

int main() {

    char text1[5050];
    char text2[5050];
    char palavras1[50][101], palavras2[50][101], repetiu = 0;
    float nDePalavras1, nDePalavras2, nDeRepeticoesUnicas;
    int i, j, k;

    scanf("%[^\n]%*c%[^\n]%*c", text1, text2);

    i = 0, j = 0, k = 0;
    for (j = 0; text1[j] != '\0'; j++){
        if (text1[j] != ' ') {
            palavras1[i][k] = tolower(text1[j]);
            k++;
        }
        else{
            k = 0;
            i++;
        }
    }
    nDePalavras1 = i + 1;

    i = 0, j = 0, k = 0;
    for (j = 0; text2[j] != '\0'; j++){
        if (text2[j] != ' ') {
            palavras2[i][k] = tolower(text2[j]);
            k++;
        }
        else {
            k = 0;
            i++;
        }
    }
    nDePalavras2 = i + 1;

    for (i = 0; i < nDePalavras1; i++){
        for (j = 0; j < nDePalavras2 && !repetiu; j++){
            repetiu = strcmp(palavras1[i], palavras2[j]) ? 0 : 1;
            if (repetiu) {
                for (k = 0; k < nDePalavras2; k++){
                    if (strcmp(palavras1[i], palavras2[k]) == 0){
                        strcpy(palavras2[k], "#");
                    }
                }
            }
        }
        nDeRepeticoesUnicas += repetiu ? 1 : 0;
        repetiu = 0;
    }

    // printf("%.1f\n", nDeRepeticoesUnicas);
    // printf("%.1f\n", nDePalavras1 + nDePalavras2);
    printf("%.1f", 100*(nDeRepeticoesUnicas/(nDePalavras1 + nDePalavras2)));

    return 0;
}
