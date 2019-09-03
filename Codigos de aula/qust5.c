/*int primo(int n, int d){
    if(n == 2)
        return 1;
    if(n%d == 0)
        return 0;
    else{
        if(d == 2)
            return 1;
        else 
            return 0+ 
    }
    
}*/
//Comentários da questao 5 da primeira atividade
//Identificar se o numero é primo
#include <stdio.h>

int primo(int n, int d){
    if(d>1){
        if(n%d != 0)
            return 0 + primo(n , d-1);
        else
            return 1 + primo(n, d-1);
    }else
        return 1;
}

int main(){
    int n;
    printf("Digite o numero:");
    scanf("%d",&n);
    if(primo(n,n) == 2)
        printf("É primo!");
    else
        printf("Não é primo!");
}