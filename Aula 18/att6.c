#include <stdio.h>
int calcularFatorial(int num1){
    for (int i = num1 - 1; i > 0; i--){
        num1 = num1 * i;
    }
    return num1;
}

int main() {
    int num1;
    
    printf("Digite um numero: ");
    scanf("%d", &num1);
    
    printf("Fatorial de %d = %d", num1, calcularFatorial(num1));
    
    return 0;
}