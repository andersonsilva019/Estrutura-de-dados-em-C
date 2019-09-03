#include <stdio.h>
#include <stdlib.h>

int main(){
    int *n = (int*) malloc(sizeof(int));
    int *ant1 = (int*) malloc(sizeof(int));
    int *ant2 = (int*) malloc(sizeof(int));
    int *fib = (int*) malloc(sizeof(int));
    int *i = (int*) malloc(sizeof(int));
    *ant1 = 1;
    *ant2 = 1;
    *fib=1;
    
    printf("Qual valor série de fibonacci");
    scanf("%d", n);
    
    if(*n==1 || *n==2) printf("1");
    else{
        
        for(*i=3; *i<=*n; (*i)++){
            *fib = *ant1 + *ant2;
            *ant1 = *ant2;
            *ant2 = *fib;
            
        }
        printf("O %do valor da série de fibonacci é %d.", *n, *fib);
        
    }
    
    free(ant1);
    free(ant2);
    free(fib);
    free(n);
    free(i);
    return(0);
}
