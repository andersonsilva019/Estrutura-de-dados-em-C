#include <stdio.h>

int primo(int num,int div){
    
    if(div == 1)
        return 1;
        if(num%div == 0)
           return 0;
    
        return primo(num,div-1);   
}


int main(){

    int num = 0;
    int cont = 0;
    printf("Digite o numero: ");
    scanf("%d",&num);
    if(num == 1)
        printf("Não é primo");
    else{
        if(primo(num,num-1)==1)
        printf("É primo");
    else
        printf("Não é primo");
    }
    
    
}

