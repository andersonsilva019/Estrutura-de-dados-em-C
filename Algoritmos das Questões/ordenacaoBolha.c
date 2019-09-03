#include <stdio.h>

void ordenacao_bolha(int *v, int n){
     int i, j, temp;

    for(i=n-1;i>0;i--){ // percorro todos os elementos do vetor, ordenando a posição i
       for(j=0;j<i;j++){
   if(v[j] > v[j+1]){ //Quando um elemento maior está uma posição antes no vetor, ele é passado para frente
             temp = v[j];
             v[j] = v[j+1];
             v[j+1] = temp;
           }
       }
    }    
}

int main(){
   int v[4] = {1000, 100, 20, 2};
   ordenacao_bolha(v, 4);
   int i =0;
   for(i=0; i<4;i++) printf("Elemento %d do vetor %d", i, v[i]);
  
  
   return(0);
}















