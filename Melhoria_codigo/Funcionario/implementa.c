#include "head.h"
#include <string.h>

Empresa* criarEmpresa(Empresa *e, char nome[100]){
    //Empresa *e = (Empresa*)malloc(sizeof(Empresa));
    strcpy(e->nome,nome);
    e->qtdFuncionarios = 0;
    return e;
}

void admitirFuncionario(Empresa *e, Funcionario *novo){
    printf("Digite o nome do funcionario: ");
    scanf(" %[^\n]",e->funcionarios[e->qtdFuncionarios].nome);
    printf("Digite o valor do salario: ");
    scanf("%f",&e->funcionarios[e->qtdFuncionarios].salario);
    e->qtdFuncionarios++;
}

void exibir(Empresa *e, Funcionario *f){
    printf("Nome da empresa: %s\n",e->nome);
    printf("Qtd Funcionario: %d\n",e->qtdFuncionarios);
    printf("Funcionarios: \n");
    for(int i = 0; i < e->qtdFuncionarios;i++){
        printf("-Nome: %s\n",e->funcionarios[i].nome);
        printf("-Salario: %.1f\n",e->funcionarios[i].salario);
        printf("\n");
    }
    
}

