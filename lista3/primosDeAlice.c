#include <stdio.h>

int main() {

    int tam = 1, temp, num, divVI;

    scanf("%d", &tam);

    int v[tam*tam];

    for(int i = 1; i <= (tam*tam); i++){

        scanf("%d", &num);

        v[i] = num;

    }

    for (int i = 1; i<=(tam*tam); i++){
        for(int j = i; j<=(tam*tam); j++){
            if (v[i] > v[j]){
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;

            }
        }
    }

    for (int i = 1; i<=(tam*tam); i++){

        divVI = 0;

        for (int j = 1; j<=v[i]; j++){
            if (v[i] % j == 0) divVI++;
        }

        if (divVI == 2) printf("%d ", v[i]);

    }

    return 0;
}