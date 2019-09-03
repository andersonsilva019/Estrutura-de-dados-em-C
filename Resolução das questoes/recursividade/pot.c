#include <stdio.h>

int pot2(int exp){
  if(exp >=1) return (2*pot2(exp-1));
  else return 1;
}

int main(){
  int exp;
  printf("Digite o valor do expoente para saber o resultado da potencia de dois");
  scanf("%d", &exp);
  printf("O resultado é %d", pot2(exp));
  
  return(0);
}
