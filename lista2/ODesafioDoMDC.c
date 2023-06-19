#include <stdio.h>

int main() {
    
    int x, y, subs;
    int a, b, c, ndivisores = 0, maiorDivisores = 0, menorDivisores = 0;

    scanf("%d %d", &x, &y);

    if (x>y){
        subs = x;
        x = y;
        y = subs;
    }

    //Define a
    for(int i = x; i <= y; i++){
        ndivisores = 0;
        for(int j = 1; j<=i; j++){
            if(i%j == 0) ndivisores++;
            if(ndivisores > maiorDivisores){
                maiorDivisores = ndivisores;
                a = i;
                }
        }
        if (menorDivisores > 0 && ndivisores > 2 && ndivisores < menorDivisores) {
            menorDivisores = ndivisores;
            b = i;
        }
        else if (menorDivisores == 0 && ndivisores > 2){
            menorDivisores = ndivisores;
            b = i;
        }
    }

    printf("%d ", a);
    printf("%d ", b);

    //Define c
    while(a != 0 && b != 0){
        if (a>b){
            a = a%b;
        }
        else{
            b = b%a;
        }
    }

    c = (a ? a : b);

    printf("%d ", c);

    return 0;
}