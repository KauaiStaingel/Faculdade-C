#include <stdio.h>
#define TAM 3 

typedef struct Banda{
    char nome[20] ;
    char estilo [20] ;
    int numInteg;
    int rank;
} BANDA;

void leBanda (BANDA *v){
    for(int i=0; i < TAM; i++){
        printf("\nNome da Banda: ");
        scanf("%s", v[i].nome);
        printf("\nEstilo musical:");
        scanf("%s", v[i].estilo);
        printf("Quabtidade de integrantes: ")
        scanf("%d", &v[i].numInteg);
        printf("Rank do seu gosto:");
        scanf("%d", &v[i].rank);
    }
}

void exibeBanda (BANDA *exib){
    for(int i=0; i < TAM; i++){
        printf("\n\nBanda: %s",    exib[i].nome);
        printf("\nEstilo: %s",     exib[i].estilo);
        printf("\nIntegrantes: %d",exib[i].numInteg);
        printf("\nPosicao: %d",    exib[i].rank);
    }
}
int main() {
    BANDA v[TAMANHO];    
    leBanda (v);
    printf ("\n\nLISTAGEM DE TODAS AS BANDAS");
    exibeBanda (v);
    return 0;
}

    }
}
