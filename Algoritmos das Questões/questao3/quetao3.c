#include <stdio.h>
#include <stdlib.h>

//Recebendo a referencia da variavel
void swap(int *p, int *q){

    int aux = 0;
    aux = *p;
    *p = *q;
    *q = aux;
}


int main(){

    int p = 0;
    int q = 0;
	

	// int *num1 = (int*) malloc(sizeof(int));
	// int *num2 = (int*) malloc(sizeof(int));
    printf("Digite um valor de P: ");
    scanf("%d",&p);
    getchar();
    printf("Digite um valor de Q: ");
    scanf("%d",&q);
    getchar();

    printf("====== ANTES DA TROCA ======\n");
    printf("Valor de P:%d\n",p);
    printf("Valor de Q:%d\n",q);
    printf("\n");
    
    //Passando a referencia da variavel
	//swap(num1,num2);
    swap(&p,&q);

    printf("====== DEPOIS DA TROCA ========\n");
    printf("Valor de P:%d\n",p);
    printf("Valor de Q:%d\n",q);
    printf("\n");

	
	//free(num1);
	//free(num2);


}
