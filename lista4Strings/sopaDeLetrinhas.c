#include <stdio.h>
#include <string.h>

int main() {

    char frase[2][30];
    memset(frase, '~', sizeof(frase));

    for (int i = 0; i < 30 && frase[0][i] != '\0'; i++){
        scanf(" %c", &frase[0][i]);
    }

    printf("%s", frase[0]);

    return 0;
}