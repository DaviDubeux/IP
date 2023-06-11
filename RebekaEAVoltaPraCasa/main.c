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

                sChar = (c1=='a')?(sChar+1):(c1=='b')?(sChar+2):(c1=='c')?(sChar+3):(c1=='d')?(sChar+4):(c1=='e')?(sChar+5):(c1=='f')?(sChar+6):(c1=='g')?(sChar+7):(c1=='h')?(sChar+8):(c1=='i')?(sChar+9):(c1=='j')?(sChar+10):(c1=='k')?(sChar+11):(c1=='l')?(sChar+12):(c1=='m')?(sChar+13):(c1=='n')?(sChar+14):(c1=='o')?(sChar+15):(c1=='p')?(sChar+16):(c1=='q')?(sChar+17):(c1=='r')?(sChar+18):(c1=='s')?(sChar+19):(c1=='t')?(sChar+20):(c1=='u')?(sChar+21):(c1=='v')?(sChar+22):(c1=='w')?(sChar+23):(c1=='x')?(sChar+24):(c1=='y')?(sChar+25):(sChar+26);

                sChar = (c2=='a')?(sChar+1):(c2=='b')?(sChar+2):(c2=='c')?(sChar+3):(c2=='d')?(sChar+4):(c2=='e')?(sChar+5):(c2=='f')?(sChar+6):(c2=='g')?(sChar+7):(c2=='h')?(sChar+8):(c2=='i')?(sChar+9):(c2=='j')?(sChar+10):(c2=='k')?(sChar+11):(c2=='l')?(sChar+12):(c2=='m')?(sChar+13):(c2=='n')?(sChar+14):(c2=='o')?(sChar+15):(c2=='p')?(sChar+16):(c2=='q')?(sChar+17):(c2=='r')?(sChar+18):(c2=='s')?(sChar+19):(c2=='t')?(sChar+20):(c2=='u')?(sChar+21):(c2=='v')?(sChar+22):(c2=='w')?(sChar+23):(c2=='x')?(sChar+24):(c2=='y')?(sChar+25):(sChar+26);

                sChar = (c3=='a')?(sChar+1):(c3=='b')?(sChar+2):(c3=='c')?(sChar+3):(c3=='d')?(sChar+4):(c3=='e')?(sChar+5):(c3=='f')?(sChar+6):(c3=='g')?(sChar+7):(c3=='h')?(sChar+8):(c3=='i')?(sChar+9):(c3=='j')?(sChar+10):(c3=='k')?(sChar+11):(c3=='l')?(sChar+12):(c3=='m')?(sChar+13):(c3=='n')?(sChar+14):(c3=='o')?(sChar+15):(c3=='p')?(sChar+16):(c3=='q')?(sChar+17):(c3=='r')?(sChar+18):(c3=='s')?(sChar+19):(c3=='t')?(sChar+20):(c3=='u')?(sChar+21):(c3=='v')?(sChar+22):(c3=='w')?(sChar+23):(c3=='x')?(sChar+24):(c3=='y')?(sChar+25):(sChar+26);

                cadaHomem;
                printf("%d\n", sChar);
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