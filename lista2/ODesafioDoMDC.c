#include <stdio.h>

int main() {
    
    int x, y, subs;
    int a0, a1, b0, b1, c, ndivisores = 0, maiorDivisores = 0, menorDivisores = 0;

    scanf("%d %d", &x, &y);

    if (x>y){
        subs = x;
        x = y;
        y = subs;
    }

    //Define a0
    for(int i = x; i <= y; i++){
        ndivisores = 0;
        for(int j = 1; j<=i; j++){
            if(i%j == 0) ndivisores++;
            if(ndivisores > maiorDivisores){
                maiorDivisores = ndivisores;
                a0 = i;
                }
        }
    }

    //Define b0
    for(int i = x; i <= y; i++){
        ndivisores = 0;
        for(int j = 1; j<=i; j++){
            if(i%j == 0) ndivisores++;
        }
        if (menorDivisores > 0 && ndivisores > 2 && ndivisores < menorDivisores) {
            menorDivisores = ndivisores;
            b0 = i;
        }
        else if (menorDivisores == 0 && ndivisores > 2){
            menorDivisores = ndivisores;
            b0 = i;
        }
    }

    printf("%d ", a0);
    printf("%d ", b0);

    //Define c
    while(a1 != a0 || b1 != b0){
        a1 = a0 % b0;
        a0 = a1;
        b1 = b0 % a0;
        b0 = b1;
    }

    if (a0>b0){
        subs = a0;
        a0 = b0;
        b0 = subs;
    }

    for(int i = 1; i <= b0; i++){
        if(a0 % i == 0 && b0 % i ==0) {
            c = i;
        }
    }

    printf("%d ", c);

    return 0;
}