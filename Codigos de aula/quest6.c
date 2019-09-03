#include <stdio.h>
int retorna_maior(int m[], int pos){
    if(pos == 0)
        return m[pos];
    else{
        int valor =  retorna_maior(m, pos-1);
        if(valor > m[pos])
            return valor;
        else
            return m[pos];
    }
}


int main(){
    
    int m[10]= {1, 2, 3,4, 5,6, 7,8, 9,500};
    printf("O maior valor é: %d",retorna_maior(m,9));

    return 0;

}