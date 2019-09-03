#include "reta.h"

int main(){

    Ponto p1, p2;

    printf("Digite os pontos da primeira coordenada:\n");
    scanf("%d%d",&p1.x,&p1.y);
    printf("\n");
    printf("Digite os pontos da segunda coordenada:\n");
    scanf("%d%d",&p2.x,&p2.y);
    printf("\n");

    float dist = distancia_ponto(p1,p2);

    printf("A distancia é: %.1f",dist);

}
