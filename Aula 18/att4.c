#include <stdio.h>
int dobro(int num1){
    num1 += num1;
    return num1;
}

int main() {
    int num1;
    
    printf("Qtd inicial: ");
    scanf("%d", &num1);
    
    if (num1 <= 0){
        printf("Digite uma qtd maior que 0\n");
    } else {
        printf("Quantidade apos duplicada: %d", dobro(num1));
    }
    
    return 0;
}