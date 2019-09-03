#include "carro.h"
#include <limits.h>
#include <stdlib.h>

void ler_valores(Carro *c){
    for(int i = 0; i < 3; i++){
        system("clear");
        printf("Digite a marca:");
        scanf(" %[^\n]",c[i].marca);
        printf("Digite o modelo:");
        scanf(" %[^\n]",c[i].modelo);
        printf("Digite o valor da diaria:");
        scanf("%f",&c[i].vl_diaria);
        printf("Digite a qtd de porta:");
        scanf("%d",&c[i].portas);
    }
}

Carro menor_diaria(Carro *c){
    Carro aux;
    int menor = INT_MAX;

    for(int i = 0; i < 3; i++){
        if(c[i].vl_diaria < menor)
            aux = c[i];
    }
    return aux;
}

void imprime(Carro *c){
    printf("===== Carro com a menor diaria ======\n");
    printf("Marca:%s\n",c->marca);
    printf("Modelo: %s\n",c->modelo);
    printf("Vl diaria: %.1f\n",c->vl_diaria);
    printf("Qtd portas: %d\n",c->portas);
    printf("======================================\n");
}