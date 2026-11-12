#include <string.h>
#include <stdio.h>


void classrisc (int pt) {
    if (pt >= 0 && pt < 5) {
        printf("Menor de 10%%");
    } else if (pt < 10) {
        printf("Entre 10%% e 20%%");
    } else if (pt < 15) {
        printf("Entre 20%% e 30%%");
    } else if (pt < 19) {
        printf("Entre 30%% e 50%%");
    } else if (pt < 22) {
        printf("Acima de 50%%");
    }
}

float calcimc(float alt, float peso) {
    float imc = peso/(alt*alt);
    return imc;
}

int pontt (int i1, float dados[5][13]) {
    int pt = 0;
    for (int i = 0; i < 13; i++) {
        if (i >= 0 && i < 3) {
            if (i == 0){
                if (dados[i1][0] > 63 ) {
                    pt += 3;
                }
            } else if (i == 1){
                if (dados[i1][1] > 159) {
                    pt += 3;
                }
            } else if (dados[i1][i] == 1) {
                pt += 3;
            }
        }
        if (i > 2 && i < 7){
            if (i == 6){
                if(calcimc(dados[i1][7], dados[i1][6]) > 29) {
                    pt += 2;
                    printf("\n%f",calcimc(dados[i1][7], dados[i1][6]));
                }
            } else if (i == 5) {
                if (dados[i1][5] > 159){
                    pt += 2;
                }
            }else if (dados[i1][i] == 1) {
                pt += 2;
            }
        }
        if (i > 7 || i < 13){
            if (dados[i1][i] == 1){
                pt += 1;
            }
        }
    }
    return pt;
}

int main(){
    char nome[5][50];
    float fatores[5][13];
    int pacientes;
    
    printf("\n-----------------------------");
    printf("\n SISTEMA DE ANALISE DE RISCO");
    printf("\n-----------------------------");
    printf("\nQuantidade de pacientes (1-5): ");
    scanf("%d", &pacientes);
    
    if (pacientes < 1 || pacientes > 5) {
        printf("Digite um número válido de pacientes.");
    }else {
        for(int i = 0; i < pacientes; i++){
            printf("\nCadastro dos Pacientes");
            
            printf("\n\nDigite o nome do paciente:");
            scanf("%49s", nome[i]);
            printf("\nDigite a idade do paciente:");
            scanf("%f", &fatores[i][0]);
            printf("\nDigite a Pressão arterial sistólica(mmHg):");
            scanf("%f", &fatores[i][1]);
            printf("\nTabagismo(1 - Sim/ 0 - Não):");
            scanf("%f", &fatores[i][2]);
            printf("\nDiabetes(1 - Sim/ 0 - Não):");
            scanf("%f", &fatores[i][3]);
            printf("\nHistórico de doença cardíaca(1 - Sim/ 0 - Não):");
            scanf("%f", &fatores[i][4]);
            printf("\nColesterol LDL(mg/dl):");
            scanf("%f", &fatores[i][5]);
            printf("\nPeso(kg):");
            scanf("%f", &fatores[i][6]);
            printf("\nAltura(m):");
            scanf("%f", &fatores[i][7]);
            printf("\nSedentarismo(1 - Sim/ 0 - Não):");
            scanf("%f", &fatores[i][8]);
            printf("\nAlimentação rica em ultraprocessados(1 - Sim/ 0 - Não):");
            scanf("%d", &fatores[i][9]);
            printf("\nEstresse crônico elevado(1 - Sim/ 0 - Não):");
            scanf("%d", &fatores[i][10]);
            printf("\nSono inadequado(1 - Sim/ 0 - Não):");
            scanf("%d", &fatores[i][11]);
            printf("\nSexo biólogico masculino(1 - Sim/ 0 - Não):");
            scanf("%d", &fatores[i][12]);
        }
        
        printf("\n--------------------");
        printf("\n RELATORIO DE RISCO");
        printf("\n--------------------");
        
        for(int i = 0; i < pacientes;i++) {
            printf("\nPaciente: %s\n", nome[i]);
            int pt = pontt(i, fatores);
            classrisc(pt);
        }
    }
    
    return 0;
}
