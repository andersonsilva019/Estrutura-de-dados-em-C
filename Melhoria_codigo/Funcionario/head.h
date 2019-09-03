#include <stdio.h>
#include <stdlib.h>

typedef struct{

    char nome[100];
    float salario;

}Funcionario;

typedef struct{

    char nome[100];
    int qtdFuncionarios;
    Funcionario funcionarios[10];

} Empresa;

Empresa* criarEmpresa(Empresa *e,char nome[100]);

void admitirFuncionario(Empresa *e, Funcionario *novo);

void exibir(Empresa *e, Funcionario *f);
