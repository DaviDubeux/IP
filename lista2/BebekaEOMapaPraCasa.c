#include <stdio.h>

int main() {

    char direcao;
    int modulo, pos = 20;

    while(1){

        scanf(" %c", &direcao);

        if(direcao == 'x') break;
        
        scanf(" %d", &modulo);
        
        if(direcao == 'd'){
            for(int i = 1; i <= pos; i++) printf(" ");
            for(int i = 1; i <= modulo; i++) printf("->");
            pos+=(2*modulo);
            printf("\n");
        }

        if(direcao == 'e'){
            pos-=(2*modulo);
            for(int i = 1; i <= pos; i++) printf(" ");
            for(int i = 1; i <= modulo; i++) printf("<-");
            printf("\n");
        }

        if(direcao == 'f'){
            for(int i = 1; i <= modulo; i++){
                for(int j = 1; j <= pos; j++) printf(" ");
                printf("|\n");
            }
        }
    }
    for(int j = 1; j <= pos; j++) printf(" ");
    printf("x\n");



    return 0;
}