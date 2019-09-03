/*Implemente uma função recursiva qeu receba um vetor e pos e retorne a soma dos elementos do vetor*/

#include <stdio.h>

int retorna_soma(int v[], int pos){
    
    
    if(pos == 0)
        return v[0];
    else
        return v[pos] + retorna_soma(v,pos-1);

}

int main(){

    int vet[5] = {1, 2, 3, 4, 5};
    printf("A soma é: %d",retorna_soma(vet,4));
    return 0;
}