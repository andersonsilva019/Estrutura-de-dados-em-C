#include <stdio.h>

//Teste
void bubble_sort(int vet[], int size){
    int proximo = 0;

    for(int i = 0; i < size; i++){
        for(int j = size-1; j > i; j--){
            if(vet[j] < vet[j-1]){
                proximo = vet[j];
                vet[j] = vet[j-1];
                vet[j-1] = proximo;
            }
        }
    }
}

int main(){
      //Vetor desordenado
    int vet[6] = {8, 3, 1, 42, 12, 5};

    //Funcao de ordenação utilizando o insert_sort
    bubble_sort(vet,6);

    //Apresentar vetor ordenado
    for(int i = 0; i < 6;i++){
        printf("[");
        printf("%d",vet[i]);
        printf("]");
    }
}