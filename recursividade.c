#include <stdio.h>
void ciclo (int n, int limite){
    printf("\n %d", n);
    if (n < limite) ciclo(n+1, limite);
}

int fatorial (int n){
    int aux = 1;
    if(n==0) aux = 1;
    else aux = n * fatorial(n-1);
    return aux;
}


int main (){
    ciclo(2,10);
    printf("\n %d", fatorial(5));
    
    
}