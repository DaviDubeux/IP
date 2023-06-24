#include <stdio.h>

int main() {

    char n;
    int valor = 0, x = 0, y = 0, maiorValor = 0, maiorX = 0, maiorY = 0;

    int cidade[4][4] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 20 ; i++){
        scanf(" %c", &n);

        switch (n){
            case 'c':
                y--;
                break;

            case 'b':
                y++;
                break;

            case 'e':
                x--;
                break;

            case 'd':
                x++;
                break;

            default:
                break;
        }

        cidade[y][x]++;

    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            valor = cidade[i][j];
            if (valor > maiorValor){
                maiorValor = valor;
                maiorX = j;
                maiorY = i;
            }
        }
    }

    printf("Coordenada X:%d, Y:%d", maiorX, maiorY);

    return 0;
}