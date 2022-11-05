#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL,"Portuguese");
	int i,vote,candidato1=0,candidato2=0,nulos=0,brancos=0,lidos=0;
	
	printf("Utilize 1 para Candidato 1, 2 para Candidato 2, 3 para Voto em Branco e 4 para Voto Nulo \n");
	
	//i<10 por motivos hipoteticos
	for(i=0;i<10;i++){
		scanf("%d",&vote);
		if(vote == 1){
			candidato1++;
			lidos++;
		} 
		else if(vote == 2){
			candidato2++;
			lidos++;
		} 
		else if(vote == 3){
			lidos++;
			brancos++;
		}
		else if(vote == 4){
			nulos++;
			lidos++;
		}
	}
	printf("Total de Votos Candidato 1: %d\n ",candidato1);
	printf("Total de Votos Candidato 2: %d\n ",candidato2);
	printf("Total de Votos em Branco: %d\n ",brancos);
	printf("Total de Votos Nulos: %d\n ",nulos);
	printf("Total de Votos Lidos: %d\n ",lidos);
	
	if(candidato1>candidato2){
		printf("O Vencedor foi o Candidato 1!");
	}
	else if (candidato2>candidato1){
		printf("O Vencedor foi o Candidato 2!");
	} else {
		printf("Empate, segundo turno!");
	}

	
	
	
}
