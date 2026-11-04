#include <stdio.h>

int main(){
    int numeros[2][2];
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            printf("Digite um valor: ");
            scanf("%d", &numeros[i][j]);
        }
    }
    printf("|%d|%d|\n", numeros[0][0], numeros[0][1]);
    printf("|%d|%d|\n", numeros[1][0], numeros[1][1]);

    return 0;
}
