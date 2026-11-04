#include <stdio.h>

int main(){
    int numeros[3][3] = {
    {10, 20, 50},
    {30, 40, 60},
    {70, 80, 90}
    };
    int soma = 0;
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            soma += numeros[i][j];
        }
    }
    printf("soma = %d", soma);
    
    return 0;
}