#include <stdio.h>

void ordenacao_insercao(int *v, int n){
     int i, j, temp;

    for(i=1;i<n;i++){ 
        j=i-1;
        temp = v[i];
         
        while(j>=0 && v[j] < temp){
            
              v[j+1] = v[j];
              j--;
        }
      
        v[j+1] = temp;
       
    }    
}

void ordenacao_selecao(int *v, int n){
   
     int i, j, pos_min, min;

    for(i=0;i<n;i++){
       pos_min = i;

       for(j=i+1; j<n;j++){ 
          if(v[j]> v[pos_min]) 
            pos_min = j;           
       }
      
       min = v[pos_min];
      v[pos_min] = v[i];
      v[i] = min;    
    }    
}


int main(){

    int vet[5] = {34, 12, 1, 10, 44};
    int op = 0;

    printf("Digite 1 - insertion\nDigite 2 - Selection\n");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        ordenacao_insercao(vet,5);
        for(int i = 0; i < 5; i++)
            printf("-%d-",vet[i]);
        break;
    case 2:
        ordenacao_selecao(vet,5);
        for(int i = 0; i < 5; i++)
            printf("-%d-",vet[i]);
        break;
    default:
        break;
    }
}