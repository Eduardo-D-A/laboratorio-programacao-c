#include <stdio.h>
void exibirMenu(){
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n\n");
}

float somar(float i1,float i2) {
    float soma = i1 + i2;
    return soma;
}

float subtrair(float i1,float i2) {
    float sub = i1 - i2;
    return sub;
}

float dividir(float i1,float i2) {
    float divi = i1 / i2;
    return divi;
}

float mult(float i1,float i2) {
    float mult = i1 * i2;
    return mult;
}

int main() {
	int opcao = 1;
	float i1, i2, result;
	
	exibirMenu();
	
	while (opcao != 0) {
	    printf("Escolha uma opcao: ");
    	scanf("%d", &opcao);
    	
    	if (opcao == 0){
    	    break;
    	}
    	
    	if (opcao < 1 || opcao > 4){
    	    printf("Digite uma opcao válida\n\n");
    	    continue;
    	}
    	
    	printf("Escolha um numero: ");
    	scanf("%f", &i1);
    	printf("Escolha um numero: ");
    	scanf("%f", &i2);
    	
    	switch(opcao){
    	    case 1:
        	    result = somar(i1, i2);
        	    break;
        	case 2:
        	    result = subtrair(i1, i2);
        	    break;
        	case 3:
        	    result = dividir(i1, i2);
        	    break;
        	case 4:
        	    result = mult(i1, i2);
        	    break;
    	}
    	printf("Resultado: %.2f\n", result);
	}
	
    return 0;
}
