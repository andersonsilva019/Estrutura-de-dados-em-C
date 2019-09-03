#include "head.h"

int main(){

    Paciente p;
    
    printf("========= CADASTRO PACIENTE ==============\n");
    printf("Digite o nome do paciente: ");
    scanf("%[^\n]",p.nome);
    getchar();
    printf("Digite o endereco: ");
    scanf("%[^\n]",p.endereco);
    getchar();
    printf("Digite o telefone: ");
    scanf("%d",&p.telefone);
    getchar();
    printf("Digite a altura: ");
    scanf("%f",&p.altura);
    getchar();
    printf("Digite a data de nascimento: ");
    scanf("%d",&p.dat_nas);
    getchar();
    printf("Digite o peso: ");
    scanf("%f",&p.peso);
    getchar();

    printf("\n\n");

    exibir(p);
    
}