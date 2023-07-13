#include <stdio.h>
#include <string.h>
#define tam 501

int main() {

    char texto[tam], ascii[4], lendo = 0;
    scanf(" %500[^\n]", texto);

    for (int i = 0; i < tam; i++){
        
        if (texto[i] == ']'){
            lendo = 0;
        }
        if (texto[i] == '[' || lendo){
            lendo = 1;
            // ascii
        }
    }

    return 0;
}