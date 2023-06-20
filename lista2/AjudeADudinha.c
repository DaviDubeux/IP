#include <stdio.h>

int main() {

    int n, k, p, q;
    int divisoresDeI = 0, divisoresDeJ = 0, divisoresPrimosDeI = 0;

    scanf("%d %d %d", &n, &k, &p);

    for(int i = n; i < k  && divisoresPrimosDeI != p; i++){
        for(int j = 1; j <= i; j++){
            for (int k = 1; k <= j; k++){
                if (j%k == 0) divisoresDeJ++;
            }
            if (divisoresDeJ == 2 && i%j == 0 && (i/j) % j != 0 && j != 2){
                divisoresPrimosDeI++;
            }
        }
    }

    for(int i = n; i < k  && divisoresPrimosDeI; i++){
        for(int j = 1; j <= i; j++){
            for (int k = 1; k <= j; k++){
                if (j%k == 0) divisoresDeJ++;
            }
            if (divisoresDeJ == 2 && i%j == 0 && (i/j) % j != 0 && j != 2){
                divisoresPrimosDeI++;
            }
        }
        q = (divisoresDeI/p) - 1;
    }

    return 0;
}