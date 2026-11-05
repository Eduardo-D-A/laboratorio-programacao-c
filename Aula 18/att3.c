#include <stdio.h>
int verificarPar(int num1){
    if (num1 % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int num1;
    
    printf("Digite um numero: ");
    scanf("%d", &num1);
    
    if (num1 <= 0){
        printf("Digite um numero maior que 0")
    } else {
        if (verificarPar(num1) == 1) {
            printf("O numero %d e par", num1);
        } else {
            printf("O numero %d e impar", num1);
        }
    }
    
    return 0;
}