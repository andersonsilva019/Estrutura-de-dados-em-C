/*

Criar uma função recursiva que receba um vetor de inteiros de 
tamanho n e retorne o maior valor dos elementos do vetor através de 
recursividade. Utilize a seguinte assinatura para 
a função: int retorna_maior(int v[], int pos); onde pos é a posição a ser 
percorrida no vetor e o valor retornado é o maior valor.

*/

/*int maximoR (int n, int v[]) {
   int x;
   if (n == 1) x = v[0];
   else {
      x = maximoR (n-1, v); 
      if (x < v[n-1]) x = v[n-1];
   }
   return x;
}*/

int retorna_maior(int v[], int pos){
    int aux;
    if(pos == 1)
        aux = v[0];
    else{
        aux = retorna_maior(v,pos-1);
        if(pos < v[pos-1])
            aux = v[pos-1];
    }

    return aux;
}


#include <stdio.h>

int main(){
    int size = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&size);
    int vet[size];

    printf("Digite os elementos do vetor:");
    for(int i = 0; i < size; i++)
        scanf("%d",&vet[i]);

    printf("O maior elemento é: %d",retorna_maior(vet,size));


}