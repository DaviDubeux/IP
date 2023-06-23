#include <stdio.h>

int main() {

    int n, x = 0, y = 0;

    scanf("%d", &n);

    char placas[n][8];

    for (int i = 0; i < n ; i++){
        for (int j = 0; j < 7 ; j++){
            scanf(" %c", &placas[i][j]);
        }
        placas[i][7] = 1;
    }

    for (int i = 0; i < n ; i++){
        for (int j = 0; j < 7 ; j++){
            if (j < 3 && placas[i][7] == 1){
                placas[i][7] = (64 < placas[i][j] && placas[i][j] < 91) ? 1 : 0;
            }
            else if (placas[i][7] == 1){
                placas[i][7] = (47 < placas[i][j] && placas[i][j] < 58) ? 1 : 0;
            }
        }
        if (placas[i][7] == 1) x++;
        else y++;
    }

    printf("%d placas:\n", x);
    for (int i = 0; i < n ; i++){
        if (placas[i][7] == 1){
            for (int j = 0; j < 7 ; j++){
                printf("%c", placas[i][j]);
            }
        printf("\n");
        }
    }

    printf("%d erros:\n", y);
    for (int i = 0; i < n ; i++){
        if (placas[i][7] == 0){
            for (int j = 0; j < 7 ; j++){
                printf("%c", placas[i][j]);
            }
        printf("\n");
        }
    }

    return 0;
}