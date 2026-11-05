#include <stdio.h>
float maiorPreco(float i1, float i2){
    float maior;
    if (i1 > i2){
        maior = i1;
    } else if (i2 > i1) {
        maior = i2;
    } else {
        return 0;
    }
    return maior;
}

int main(){
    float i1, i2, maior;
    
    printf("Preco 1: ");
    scanf("%f", &i1);
    
    printf("Preco 2: ");
    scanf("%f", &i2);
    
    maior = maiorPreco(i1, i2);
    if (maior == 0){
        printf("Produtos tem o mesmo preco.");
    } else {
        printf("Maior preco: R$ %.2f.", maior);
    }
    
    return 0;
}