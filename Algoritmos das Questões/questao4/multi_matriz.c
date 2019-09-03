#include <stdio.h>

int main(){

    int l1 = 0, c1 = 0;
    int l2 = 0, c2 = 0;
    int l3 = 0, c3 = 0;

    printf("Digite a quantidade de linha da matriz1: ");
    scanf("%d",&l1);
    getchar();
    printf("Digite a quantidade de coluna da matriz1: ");
    scanf("%d",&c1);
    getchar();
    printf("Digite a quantidade de linha da matriz2: ");
    scanf("%d",&l2);
    getchar();
    printf("Digite a quantidade de coluna da matriz2: ");
    scanf("%d",&c2);
    getchar();
    printf("Digite a quantidade de linha da matriz3: ");
    scanf("%d",&l3);
    getchar();
    printf("Digite a quantidade de coluna da matriz3: ");
    scanf("%d",&c3);
    getchar();

    int mat1[l1][c1];
    int mat2[l2][c2];
    int mat3[l3][c3];
    int somaProd = 0;

    printf("\n");
    printf("Digite os elementos da matriz1(por linha)\n");
    for(int i = 0; i < l1; i++)
        for(int j = 0; j < c1; j++)
            scanf("%d",&mat1[i][j]);

    printf("\n");
    printf("Digite os elementos da matriz2(por linha)\n");
    for(int i = 0; i < l2; i++)
        for(int j = 0; j < c2; j++)
            scanf("%d",&mat2[i][j]);

    for(int i = 0; i < l3;i++){
        for(int j = 0; j < c3;j++){
            somaProd = 0;
            for(int k = 0; k < l1; k++){
                somaProd += mat1[i][k] * mat2[k][j];
            }
                mat3[i][j] = somaProd;
        }
    }

    printf("======= RESULTADO ===========\n");
    for(int i = 0; i < l3; i++){
        for(int j = 0; j < c3; j++){
            printf("-|%d|-",mat3[i][j]);
        }
        printf("\n");
    }
}