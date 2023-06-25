#include <stdio.h>

int main() {

    int m, n;
    char c;

    scanf("%d %d", &m, &n);

    char parede[m][n];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf(" %c", &parede[i][j]);
        }
    }

    for (int i = 0; i < m - 1; i++){
        for (int j = 0; j < n; j++){
            if (parede[i][j] == 'o'){

                if (parede[i + 1][j] == '.') {
                    parede[i + 1][j] = 'o';
                }

                if (parede[i + 1][j] == '#') {
                    if (j == 0 && parede[i][j + 1] == '.'){
                        parede[i][j + 1] = 'o';
                        i--; j--;
                    }
                    else if (j < n - 1 && parede[i][j + 1] == '.'){
                        parede[i][j + 1] = 'o';
                        i--; j--;
                    }
                    else if (j < n - 1 && parede[i][j - 1] == '.'){
                        parede[i][j - 1] = 'o';
                        i--; j--;
                    }
                    else if (j == n - 1 && parede[i][j - 1] == '.'){
                        parede[i][j - 1] = 'o';
                        i--; j--;
                    }
                }
            }
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%c", parede[i][j]);
        }
        printf("\n");
    }


    
    return 0;
}