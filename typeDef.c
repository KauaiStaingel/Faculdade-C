#include <stdio.h>

typedef struct produto{
    long codigo;
    float preco;
} Produto; 


int main()
{
    Produto p;
    scanf("%ld %f", &p.codigo, &p.preco);
    printf("%ld %f", p.codigo, p.preco);
}