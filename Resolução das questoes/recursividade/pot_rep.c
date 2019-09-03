#include <stdio.h>

int pot2(int exp){
    int result = 2;
    while(exp>1){
        result *=2;
        exp--;
    }
    
    return result;
}

int main(){
  int exp;
  printf("Digite o valor do expoente para saber o resultado da potencia de dois");
  scanf("%d", &exp);
  printf("O resultado é %d", pot2(exp));
  
  return(0);
}
