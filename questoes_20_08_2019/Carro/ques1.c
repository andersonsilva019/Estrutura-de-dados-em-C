#include "carro.h"
#include <stdlib.h>


int main(){

    //Vetor de estrutura;
    Carro *c = (Carro*)malloc(3*sizeof(Carro));

    //Lendo os valores do carro
    ler_valores(c);

    //Copiando o resultado da funcao para result
    Carro result = menor_diaria(c);

    //Exibindo o carro com a menor diaria
    imprime(c);

    free(c);

}