#include "data.h"

int main(){
    Data d;
    printf("Digite o dia da data");
    scanf("%d", &d.dia);
    
    printf("Digite o mês da data");
    scanf("%d", &d.mes);
    
    printf("Digite o ano da data");
    scanf("%d", &d.ano);
    
    imprime_data(d);
    
    return(0);
}
