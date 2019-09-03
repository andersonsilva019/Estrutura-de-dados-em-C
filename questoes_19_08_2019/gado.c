#include <stdio.h>
#include <stdbool.h>

typedef struct{
    int cod;
    float leite;
    float alim;
    struct{
        int mes;
        int ano;
    }dataNas;
    bool abate;
}Gado;

int main(){
    
    Gado g[3];
    
    for(int i = 0; i < 3;i++){
        printf("Digite o codigo de identificação:\n");
        scanf("%d",&g[i].cod);
        printf("Digite a quantidade de leite(L) produzido na semana:\n");
        scanf("%f",&g[i].leite);
        printf("Digite a quantidade de alimento ingerido\n");
        scanf("%f",&g[i].alim);
        printf("-Data de nascimento-\n");
        printf("Mes: ");
        scanf("%d",&g[i].dataNas.mes);
        printf("Ano: ");
        scanf("%d",&g[i].dataNas.ano);

        g[i].abate = false;
    }

    //Assumindo que possuem quantidades de leite diferente
    if(g[0].leite > g[1].leite && g[1].leite > g[2].leite ){
        printf("===POSSUI A MAIOR QTD DE LEITE==\n");
        printf("Cod:%d\n",g[0].cod);
        printf("Qtd(leite):%.1f\n",g[0].leite);
        printf("Qtd(alim): %.1f\n",g[0].alim);
        printf("Data Nascimento\n");
        printf("  -Mes:%d\n",g[0].dataNas.mes);
        printf("  -Ano:%d\n",g[0].dataNas.ano);
        printf("=================================\n");
    } else if(g[1].leite > g[0].leite && g[0].leite > g[2].leite ){
        printf("===POSSUI A MAIOR QTD DE LEITE==\n");
        printf("Cod:%d\n",g[1].cod);
        printf("Qtd(leite):%.1f\n",g[1].leite);
        printf("Qtd(alim): %.1f\n",g[1].alim);
        printf("Data Nascimento\n");
        printf("  -Mes:%d\n",g[1].dataNas.mes);
        printf("  -Ano:%d\n",g[1].dataNas.ano);
        printf("=================================\n");
    }else if(g[2].leite > g[0].leite && g[0].leite > g[1].leite ){
        printf("===POSSUI A MAIOR QTD DE LEITE==\n");
        printf("Cod:%d\n",g[2].cod);
        printf("Qtd(leite):%.1f\n",g[2].leite);
        printf("Qtd(alim): %.1f\n",g[2].alim);
        printf("Data Nascimento\n");
        printf("  -Mes:%d\n",g[2].dataNas.mes);
        printf("  -Ano:%d\n",g[2].dataNas.ano);
        printf("=================================\n");
    }
        
}