/******************************************************************************

1. Uma aplicação precisa identificar quantos caracteres foram digitados pelo usuário em uma palavra.
Desenvolva um programa em C que receba uma palavra, percorra seus caracteres utilizando for e
apresente a quantidade de letras digitadas. Nesta atividade, você deverá realizar a contagem sem
utilizar strlen, pois essa função será estudada na próxima aula.

*******************************************************************************/
#include <stdio.h>
int main(void) {
    int cont = 0;
    
    char palavra[50];
    scanf("%49s", palavra);
    
    for (int i = 0; palavra[i] != '\0'; i++) {
    cont += 1;
    
    }
    
    printf("quantidade de letras: %d", cont);
    
    return 0;
}
