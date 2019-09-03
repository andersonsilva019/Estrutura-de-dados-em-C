#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,x1,x2 ,delta;
    scanf("%f %f %f",&a,&b,&c);

    delta = sqrt(pow(b,2) - 4 *a*c);
    float divx1 = 2*a;
    float divx2 = 2*a;
    x1 = (-b + delta)/divx1;
    x2 = (-b - delta)/divx2;
    printf("Delta ja com o resultado da raiz: %.2f\n",delta);
    if (delta > 0){
         printf("X1: %.2f\nX2: %.2f\n",x1,x2);
    }else if(delta == 0){
         printf("%.2f\n",x1);
    }else {
         printf("nao ha raiz real\n");
    }
    
 
}