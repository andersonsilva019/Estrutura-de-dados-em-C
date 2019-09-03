#include <stdio.h>

int fnc(int vet1[], int n, int vet2[], int m){

    int cont = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j++){
            if(vet1[i] == vet2[j]){
                cont++;
                vet1[i] = '-';
            }
        }
    }

    return cont;
}


int main(){
    
    int n = 5;
    int m = 5; 
    int vl;

    int vet1[] = {1, 2, 3, 4, 5};
    int vet2[] = {1, 9, 3, 8, 5};

    printf("Valores do vetor 1: \n");

    for(int i = 0; i < 5; i++){
        printf("[");
        printf("%d",vet1[i]);
        printf("]");
    }

    printf("\n");

    printf("Valores do vetor 2: \n");

    for(int i = 0; i < 5; i++){
        printf("[");
        printf("%d",vet2[i]);
        printf("]");
    }

    printf("\n");

    vl = fnc(vet1,n,vet2,m);
    printf("Valores iguais: %d",vl);

}