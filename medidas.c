#include <stdio.h>
#define TAMANHO 2

float media (float N1, float N2){
    float med; 
    med = (N1 + N2)/TAMANHO;
    return med;
}

int main (){
    int i;
    struct estruturaaluno {
        int matricula;
        float N1, N2, media;
    };
    struct estruturaaluno aluno[TAMANHO];
    for (i = 0; i < TAMANHO; i++){
        printf("Entrada de dados dos alunos\n");
        printf("matricula:\n");
        scanf("%d", &aluno[i].matricula);
        printf("\nN1:");
        scanf("%f", &aluno[i].N1);
        printf("\nN2: ");
        scanf("%f", &aluno[i].N2);
    }
    for (i = 0; i < TAMANHO; i++){
        aluno[i].media = media(aluno[i].N1, aluno[i].N2);
        printf("\nBoletim do aluno: \n");
        printf("\nNota N1: %.2f", aluno[i].N1);
        printf("\nNota N2: %.2f", aluno[i].N2);
        printf("\nMedia do aluno: %.2f", aluno[i].media);
    }
}