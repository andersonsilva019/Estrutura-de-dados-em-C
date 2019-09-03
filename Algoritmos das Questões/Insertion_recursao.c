#include <stdio.h>

void Selection_sort(int *v, int init, int end){
    
    int min , pos_min, j;

    if(init < end){
        
        pos_min = init;
        for(j= init+1; j < end;j++){ 
            if(v[j]< v[pos_min]) 
                pos_min = j;           
        }
      
    min = v[pos_min];
    v[pos_min] = v[init];
    v[init] = min;
    
    Selection_sort(v,init + 1, end);
    
    }
}


int main(){

    int v[5] = {45, 1, 29, 0, 23};
    
    Selection_sort(v,0,5);

    for(int i = 0; i < 5; i++)
        printf("-%d-",v[i]);

}