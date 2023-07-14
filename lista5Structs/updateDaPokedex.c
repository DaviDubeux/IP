#include <stdio.h>
#include <string.h>
#define inTipo inimigo.tipo[0]
#define aTipo ash[i].tipo[0]
typedef struct{
    char nome[100];
    char tipo[6];
    int ataque;
    int defesa;
    float fatorVantagem;
}pokemon;

int main() {

    pokemon inimigo, temp;
    scanf(" %s %s %d %d", inimigo.nome, inimigo.tipo, &inimigo.ataque, &inimigo.defesa);

    int n; //n de pokemons de ash
    scanf("%d", &n);

    float superEfetivo;
    pokemon ash[n];
    for (int i = 0; i < n; i++){
        scanf(" %s %s %d %d", ash[i].nome, ash[i].tipo, &ash[i].ataque, &ash[i].defesa);

        //checa se o pokemon do ash tem superefetivo contra o pokemon inimigo
        superEfetivo = ((aTipo == 'a' && inTipo == 'f')||(aTipo == 'g' && inTipo == 'a')||(aTipo == 'f' && inTipo == 'g')) ? 1.5 : 1;

        ash[i].fatorVantagem = (ash[i].ataque*superEfetivo) - inimigo.defesa;
    }

    for (int i = n; i > 0; i--){
        for (int j = 0; j < i - 1; j++){
            int ordemAlfabetica = strcmp(ash[j].nome, ash[j+1].nome);
            if (ordemAlfabetica > 0){
                temp = ash[j];
                ash[j] = ash[j+1];
                ash[j+1] = temp;
            }
            if (ash[j].fatorVantagem < ash[j+1].fatorVantagem){
                temp = ash[j];
                ash[j] = ash[j+1];
                ash[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++){
        printf("%d. %s\n", i + 1, ash[i].nome);
    }

    
    return 0;
}