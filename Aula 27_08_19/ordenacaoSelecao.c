#include <stdio.h>

void ordenacao_selecao(int *v, int n){
     int i, j, pos_min, min;

    for(i=0;i<n;i++){ // percorro todos os elementos do vetor, ordenando a posição i
       pos_min = i;

       for(j=i+1; j<n;j++){ // percorro os elementos a direita de i encontrando o menor valor
          if(v[j]< v[pos_min]) pos_min = j;           
       }

       // trocando elementos do vetor
       min = v[pos_min];
      v[pos_min] = v[i];
      v[i] = min;    
    }    
}

int main(){
   int v[4] = {60, 70, 61, 75};
   ordenacao_selecao(v, 4);
   int i =0;
   for(i=0; i<4;i++) printf("Elemento %d do vetor %d", i, v[i]);
  
  
   return(0);
}















