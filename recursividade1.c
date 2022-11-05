#include <stdio.h>
int X (int n, int m){
    int aux;
    if (n==0 || m==0) {return 1;}
    else {
        aux = X(n-1,m) + X(n-1,m-1);
        return aux;
    }
}

int main (){
    printf("%d", X(5,9));
    return 0;
}
