#include <stdio.h>
#include <string.h>

int main(void) {
    char mensagem[12] = "Olá, ";
    char ver[50];
    
    printf("Nome do estudante: ");
    char nome[50];
    scanf("%49s", nome);
    
    printf("Codigo do curso: ");
    char cadastro[50];
    scanf("%49s", cadastro);
    
    printf("\nNome: %s\n", nome);
    if (strcasecmp(cadastro, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else if(strcasecmp(cadastro, "SI") == 0) {
        printf("Curso: Sistemas de Informação\n");
    } else {
        printf("Digite um perfil válido!!");
    }
    printf("Qtd caracteres: %zu\n", strlen(nome));
    
    strcpy(ver, nome);
    strcat(mensagem, ver);
    
    printf("\n%s!", mensagem);
    
    return 0;
}