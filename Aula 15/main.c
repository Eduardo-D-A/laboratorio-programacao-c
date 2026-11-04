#include <stdio.h>

int main() {
	int assentos[3][4] = {
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};
	int i1, j1, soma = 0;
	while (1) {
		printf("Qual a fileira que voce ira ocupar? ");
		scanf("%d", &i1);
		if ( i1 < 1 || i1  > 4) {
			break;
		}

		printf("\nQual a coluna que voce ira ocupar? ");
		scanf("%d", &j1);
		if (j1 < 1 || j1 > 4) {
			break;
		}

		i1 -= 1;
		j1 -= 1;

		if (assentos[i1][j1] == 1) {
			printf("Este assento já está ocupado\n");
		} else {
			assentos[i1][j1] = 1;
		}

		printf("Quando não quiser mais ocupar assentos pressione 0\n\n");
	}

	for (int i = 0; i<3; i++) {
		for (int j = 0; j<4; j++) {
			if (assentos[i][j] ==  1) {
				soma += 1;
			}
		}
	}

	printf ("O número de assentos ocupados é igual a: %d\n\n", soma);

	for (int i = 0; i<3; i++) {
		for (int j = 0; j<4; j++) {
			if (assentos[i][j] ==  1) {
				printf("Os assentos ocupados são: Linha(%d) Coluna(%d)\n", i+1, j+1);
			}
		}
	}

	return 0;
}
