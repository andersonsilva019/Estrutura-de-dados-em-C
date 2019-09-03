#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    char nome[100];
    char endereco[50];
    int telefone;
}Pessoa;

// Era pra usar typedef struct Pessoa pessoa

Pessoa ler_valores(){

    Pessoa p;

    printf("======== LENDO VALORES =============\n");
    printf("Digite o nome: ");
    scanf(" %[^\n]",p.nome);
    getchar();
    printf("Digite o endereco: ");
    scanf(" %[^\n]",p.endereco);
    getchar();
    printf("Digite o telefone: ");
    scanf("%d",&p.telefone);
    getchar();

    return p;

}

void exibir(Pessoa *p){
    
    system("clear");

    for(int i = 0; i < 3; i++){
        printf("======= PESSOA %d ======\n",i+1);
        printf("Nome: %s\n",p[i].nome);
        printf("Endereco: %s\n",p[i].endereco);
        printf("Telefone: %d\n",p[i].telefone);
        printf("\n");
    }
}


int main(){

    Pessoa p[3];

    //Lendo os valores atraves da funcao (ler_valores)
    for(int i = 0; i < 3; i++)
        p[i] = ler_valores(p);

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            if(strcmp(p[j].nome,p[j+1].nome) > 0){
                Pessoa aux;
                aux = p[j];
                p[j] = p[j+1];
                p[j+1] = aux;
                
            }
        }
    }
    
   exibir(p);
    

}
