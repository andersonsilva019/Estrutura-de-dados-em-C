#include "head.h"

int main(){

    char name[100];
    Funcionario *f = (Funcionario*) malloc(sizeof(Funcionario));
    Empresa *e = (Empresa*)malloc(sizeof(Empresa));
    
    printf("Digite o nome da empresa: \n");
    scanf("%[^\n]",name);
    e = criarEmpresa(e,name);
    admitirFuncionario(e,f);
    exibir(e,f);
    
    //free(e);
    //free(f);

}