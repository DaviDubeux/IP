#include <stdio.h>
#include <stdlib.h>
#define naoAjudou printf("Nao foi dessa vez que Rebeka pode ajudar...\n")
#define conseguiu printf("Ela conseguiu! Rebeka voltou pra casa e apanhou da mae por sumir noite pasada!\n")
#define andou printf("E parece que Rebeka vai ter que voltar andando...\n")
#define cadaHomem printf("Cada homem ficou com %d, %d e %d reais, respectivamente\n",(int) a,(int) b,(int) c)

int main() {

    float t, x, y, z, r;
    int id1, id2, id3; 
    int s3 = 0; 
    float a, b, c;
    char c1 , c2, c3;
    int sChar = 0;

    scanf("%f %f %f %f", &t, &x, &y, &z);

    a = t*x/100;
    b = t*y/100;
    c = t*z/100;

    r = t - t*(x + y + z)/100;

    if ((a == abs(a)) && (b == abs(b)) && (c == abs(c))) { //Nao investiu nada
        cadaHomem;
        (r >= 4) ? conseguiu : andou;
    }
    else {                                               //Investiu 1
        t = t + 1;
        a = t*x/100;
        b = t*y/100;
        c = t*z/100;

        r = t - t*(x + y + z)/100;

        if ((a == abs(a)) && (b == abs(b)) && (c == abs(c)) && (r > 1)) {
            cadaHomem;
            (r >= 5) ? conseguiu : andou;           
        }
        else {        
            t = t + 1;                                   //Investiu 2
            a = t*x/100;
            b = t*y/100;
            c = t*z/100;

            r = t - t*(x + y + z)/100;

            if ((a == abs(a)) && (b == abs(b)) && (c == abs(c)) && (r > 2)) {
                
                scanf(" %c %c %c", &c1, &c2, &c3);

                cadaHomem;
                printf("%d", c1 + c2 + c3 - 96*3);
                (r >= 6) ? conseguiu : andou;           
            }
            else {                                      //Investiu 3
                t = t + 1;
                a = t*x/100;
                b = t*y/100;
                c = t*z/100;

                r = t - t*(x + y + z)/100;

                if ((a == abs(a)) && (b == abs(b)) && (c == abs(c)) && (r > 3)) {

                    scanf("%d %d %d", &id1, &id2, &id3);

                    if (id1 % 3 == 0) {
                        s3 = s3 + id1/3;
                    }
                    if (id2 % 3 == 0) {
                        s3 = s3 + id2/3;
                    }
                    if (id3 % 3 == 0) {
                        s3 = s3 + id3/3;
                    }
                    
                    cadaHomem;
                    printf("%d\n", s3);
                    (r >= 7) ? conseguiu : andou;           
                }
                else {                                 //Nao deu pra investir
                    naoAjudou;
                }
            }
        }
    }
    return 0;
}