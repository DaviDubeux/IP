#include <stdio.h>
#include <stdlib.h>
#define naoAjudou printf("Nao foi dessa vez que Rebeka pode ajudar...\n")
#define conseguiu printf("Ela conseguiu! Rebeka voltou pra casa e apanhou da mae por sumir noite pasada!\n")
#define andou printf("E parece que Rebeka vai ter que voltar andando...\n")
#define cadaHomem printf("Cada homem ficou com %f, %f e %f reais, respectivamente\n", a, b, c)

int main() {

    int t, x, y, z, r;
    int sChar, id1, id2, id3; //Se investir 2
    int s3; //Se investir 3
    float a, b, c;
    char c1 , c2, c3;

    scanf("%d %d %d %d", &t, &x, &y, &z);

    a = t*x/100;
    b = t*y/100;
    c = t*z/100;

    r = t - t*(x + y + z)/100;
    
    if (a == abs(a) && b == (abs(b)) && (c == abs(c))) { //Nao investiu nada
        cadaHomem;
        (r >= 4) ? conseguiu : andou;
    }
    else {                                               //Investiu 1
        a = (t + 1)*x/100;
        b = (t + 1)*y/100;
        c = (t + 1)*z/100;

        r = (t + 1) - (t + 1)*(x + y + z)/100;

        if (a == abs(a) && b == (abs(b)) && (c == abs(c) && r > 1)) {
            cadaHomem;
            (r >= 5) ? conseguiu : andou;           
        }
        else {                                           //Investiu 2
            a = (t + 2)*x/100;
            b = (t + 2)*y/100;
            c = (t + 2)*z/100;

            r = (t + 2) - (t + 2)*(x + y + z)/100;

            if (a == abs(a) && b == (abs(b)) && c == abs(c) && r > 2) {
                
                scanf("%c %c %c", &c1, &c2, &c3);

                sChar = (c1='a')?1:(c1='b')?2:(c1='c')?3:(c1='d')?4:(c1='e')?5:(c1='f')?6:(c1='g')?7:(c1='h')?8:(c1='i')?9:(c1='j')?10:(c1='k')?11:(c1='l')?12:(c1='m')?13:(c1='n')?14:(c1='o')?15:(c1='p')?16:(c1='q')?17:(c1='r')?18:(c1='s')?19:(c1='t')?20:(c1='u')?21:(c1='v')?22:(c1='w')?23:(c1='x')?24:(c1='y')?25:26;

                sChar = (c2='a')?sChar+1:(c2='b')?sChar+2:(c2='c')?sChar+3:(c2='d')?sChar+4:(c2='e')?sChar+5:(c2='f')?sChar+6:(c2='g')?sChar+7:(c2='h')?sChar+8:(c2='i')?sChar+9:(c2='j')?sChar+10:(c2='k')?sChar+11:(c2='l')?sChar+12:(c2='m')?sChar+13:(c2='n')?sChar+14:(c2='o')?sChar+15:(c2='p')?sChar+16:(c2='q')?sChar+17:(c2='r')?sChar+18:(c2='s')?sChar+19:(c2='t')?sChar+20:(c2='u')?sChar+21:(c2='v')?sChar+22:(c2='w')?sChar+23:(c2='x')?sChar+24:(c2='y')?sChar+25:sChar+26;

                sChar = (c3='a')?sChar+1:(c3='b')?sChar+2:(c3='c')?sChar+3:(c3='d')?sChar+4:(c3='e')?sChar+5:(c3='f')?sChar+6:(c3='g')?sChar+7:(c3='h')?sChar+8:(c3='i')?sChar+9:(c3='j')?sChar+10:(c3='k')?sChar+11:(c3='l')?sChar+12:(c3='m')?sChar+13:(c3='n')?sChar+14:(c3='o')?sChar+15:(c3='p')?sChar+16:(c3='q')?sChar+17:(c3='r')?sChar+18:(c3='s')?sChar+19:(c3='t')?sChar+20:(c3='u')?sChar+21:(c3='v')?sChar+22:(c3='w')?sChar+23:(c3='x')?sChar+24:(c3='y')?sChar+25:sChar+26;

                cadaHomem;
                printf("%d", sChar);
                (r >= 6) ? conseguiu : andou;           
            }
            else {                                      //Investiu 3
                a = (t + 3)*x/100;
                b = (t + 3)*y/100;
                c = (t + 3)*z/100;

                r = (t + 3) - (t + 3)*(x + y + z)/100;

                if (a == abs(a) && b == (abs(b)) && c == abs(c) && r > 3) {

                    scanf("%d %d %d", &id1, &id2, &id3);

                    if (id1 % 3 == 0 || id2 % 3 == 0 || id3 % 3 == 0){
                        s3 = 3*((id1/3)*(id1/3 + 1)/2 + (id2/3)*(id2/3 + 1)/2 + (id3/3)*(id3/3 + 1)/2);
                        printf("%d", s3);
                    }

                    cadaHomem;
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