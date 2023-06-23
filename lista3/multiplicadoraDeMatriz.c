#include <stdio.h>

int main()
{

    int Ai = 1, Aj = 1, Bi = 1, Bj = 1;

    scanf("%d %d %d %d", &Ai, &Aj, &Bi, &Bj);
    
    int a[Ai][Aj], b[Bi][Bj];


    if(Aj == Bi && Ai > 0 && Aj > 0 && Bi > 0 && Bj > 0){

        for (int i = 0 ; i < Ai ; i++){
            for (int j = 0 ; j < Aj ; j++){
                scanf("%d", &a[i][j]);
            }
        }

        for (int i = 0 ; i < Bi ; i++){
            for (int j = 0 ; j < Bj ; j++){
                scanf("%d", &b[i][j]);
            }
        }

        int p[Ai][Bj];

        for(int i = 0; i < Ai ; i++){
            for(int j = 0; j < Bj ; j++){
                p[i][j] = 0;
            }
        }

        for (int i = 0 ; i < Ai; i++){
            for (int j = 0; j < Bj ; j++){
                for (int x = 0 ; x < Aj ; x++){
                    p[i][j] += (a[i][x]*b[x][j]);
                }
            }
        }

        for(int i = 0; i < Ai ; i++){
            for(int j = 0; j < Bj ; j++){
                printf("%d ", p[i][j]);
            }
            printf("\n");
        }

    }
    else printf("Nao e possivel multiplicar\n");
    
    return 0;
}
