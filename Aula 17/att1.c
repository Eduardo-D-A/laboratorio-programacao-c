#include <stdio.h>
#include <string.h>

int main(void) {
    char mensagem[12] = "Bem-vindo, ";
    char ver[50];
    
    printf("digite seu nome: ");
    char nome[50];
    scanf("%49s", nome);
    
    printf("digite seu perfil (ADMIM ou COMUM): ");
    char cadastro[50];
    scanf("%49s", cadastro);
    
    printf("\nNome: %s\n", nome);
    printf("Qtd caracteres: %zu\n", strlen(nome));
    
    if (strcasecmp(cadastro, "ADMIN") == 0) {
        printf("Perfil de administrador.\n");
    } else if(strcasecmp(cadastro, "COMUM") == 0) {
        printf("Perfil diferente de administrador.\n");
    } else {
        printf("Digite um perfil válido!!");
    }
    strcpy(ver, nome);
    strcat(mensagem, nome);
    printf("\n%s!", mensagem);
    printf("\nCadastro realizado com sucesso!!!");
    return 0;
}
