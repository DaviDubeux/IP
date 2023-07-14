#include <stdio.h>
#include <string.h>
typedef struct{
    char nome[100];
    int idade;
    float altura;
    float erro;
}Filho;

int main(){

    int n, m, x;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &x);
    Filho filhos[n], temp;

    for (int i = 0; i < n; i++){
        scanf(" %s %d %f", filhos[i].nome, &filhos[i].idade, &filhos[i].altura);

        filhos[i].erro = x - (strlen(filhos[i].nome) * filhos[i].idade * filhos[i].altura);
        filhos[i].erro = (filhos[i].erro < 0) ? (-1)*(filhos[i].erro) : filhos[i].erro;  
    }

    for (int i = n; i > 0; i--){
        for (int j = 0; j < i - 1; j++){
            if (filhos[j].erro > filhos[j+1].erro){
                temp = filhos[j];
                filhos[j] = filhos[j+1];
                filhos[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < m; i++){
        printf("%s\n", filhos[i].nome);
    }

    return 0;
}
