#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int quarto;
    char cor[10];
    float area;
    int porta;
}Casa;

int main(){

    Casa *c1 = (Casa*) malloc(sizeof(Casa));
    Casa *c2 = (Casa*) malloc(sizeof(Casa));

    //Lendo os valores da casa1
    printf("Digite a qtd de quarto:\n");
    scanf("%d",&c1->quarto);
    printf("Digite a cor:\n");
    scanf(" %[^\n]",c1->cor);
    printf("Digite a area(m²):\n");
    scanf("%f",&c1->area);
    printf("Digite a qtd de porta:\n");
    scanf("%d",&c1->porta);

    //Lendo os valores da casa2
    printf("Digite a qtd de quarto:\n");
    scanf("%d",&c2->quarto);
    printf("Digite a cor:\n");
    scanf(" %[^\n]",c2->cor);
    printf("Digite a area(m²):\n");
    scanf("%f",&c2->area);
    printf("Digite a qtd de porta:\n");
    scanf("%d",&c2->porta);

    //Imprimindo os valores da casa1
    printf("====== Casa 1 =====\n");
    printf("qtd quarto: %d\n",c1->quarto);
    printf("Cor: %s\n",c1->cor);
    printf("Area: %.1f\n",c1->area);
    printf("qtd porta: %d\n",c1->porta);

    //Imprimindo os valores da casa2
    printf("====== Casa 2 =====\n");
    printf("qtd quarto: %d\n",c2->quarto);
    printf("Cor: %s\n",c2->cor);
    printf("Area: %.1f\n",c2->area);
    printf("qtd porta: %d\n",c2->porta);
    
    
    free(c1);
    free(c2);

}