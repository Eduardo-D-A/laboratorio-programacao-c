#include <stdio.h>
#include <string.h>

int main(void) {
    char mensagem[20] = "Descricao: Produto: ";
    char ver[50];
    
    printf("Produto: ");
    char nome[50];
    scanf("%49s", nome);
    
    printf("Categoria: ");
    char cadastro[50];
    scanf("%49s", cadastro);
    
    printf("\nNome: %s\n", nome);
    printf("Qtd caracteres: %zu\n", strlen(nome));
    printf("Categoria: %s\n", cadastro);
    
    strcpy(ver, nome);
    strcat(mensagem, ver);
    
    printf("\n%s", mensagem);
    printf("\nCadastro realizado com sucesso!!!");
    return 0;
}