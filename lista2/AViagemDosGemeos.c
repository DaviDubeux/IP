#include <stdio.h>

int main() {

    int n, base, soma = 0;

    scanf("%d", &n);

    base = 2*n - 1;

    for(int i = 1 ; i<=n; i++){ 
        for(int j = 1; j<= base; j++){
            if(j<(n-i+1)){ //. do começo
                printf(".");
            }
            else if(j<=(n+i-1)){ //& e -
                if( (j+i)%2 != n%2 ){
                    printf("&");
                    soma+=200;
                }
                else{
                    printf("-");
                    soma+=50;
                }
            }
            else if(j<=base){ //. do final
                printf(".");
            }
            if(j==base){
                printf("\n");
            }
        }
    }
    for(int i = 1; i<=base; i++){
        printf("#");
        soma+=100;
    }
    printf("\n");
    printf("O valor total foi: %d", soma);


    return 0;
}