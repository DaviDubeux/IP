#include <stdio.h>

int main() {

    int t, n, maiorN = 0, seqAtual = 1, maiorSeq = 1, jMaiorSeq = 0, jPassado = 0;
    int k;

    scanf("%d", &t);

    int s[t][100];

    for (int i = 0; i < t; i++){
        for (int j = 0; j < 100; j++){
            s[i][j] = 0;
        }
    }

    for (int i = 0; i < t; i++){

        scanf("%d", &n);

        for(int j = 0; j < n; j++){
            scanf("%d", &s[i][j]);
        }

        seqAtual = 1, maiorSeq = 1, jMaiorSeq = 0, jPassado = 0;
        
        for (int j = 0; j < n - 1; j++){
            if (s[i][j + 1] < s[i][j]){
                seqAtual++;
            }
            else seqAtual = 1;

            if (seqAtual > maiorSeq){
                maiorSeq = seqAtual;
                jMaiorSeq = j - maiorSeq + 2;
            }
        }

        if (maiorSeq > 1) {

            printf("%d\n", maiorSeq);

            for (int j = 0; j < maiorSeq; j++){
                printf("%d ", s[i][jMaiorSeq + j]);
            }
            
        }
        else printf("0");

        printf("\n");
    }


    return 0;
}