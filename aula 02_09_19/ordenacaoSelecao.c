#include <stdio.h>

void ordenacao_selecao(int *v, int n){
   // o i é o divisior do vetor
   // j vai percorrer i+1
   //pos_min guarda a posição do menor valor
   //min é o menor valor
     int i, j, pos_min, min;

   for(i=0;i<n;i++){ // percorro todos os elementos do vetor, ordenando a posição i
      pos_min = i;

      for(j=i+1; j<n;j++){ // percorro os elementos a direita de i encontrando o menor valor
         if(v[j]< v[pos_min]) 
            pos_min = j;           
      }
      // quando chega no final do vetor
      // trocando elementos do vetor
      //Mesma ideia da função swap
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















