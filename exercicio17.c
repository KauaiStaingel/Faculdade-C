#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL, "Portuguese");
	printf("Digite 4 valores :");
	
	float firstNote,secondNote,thirdNote,forthNote,avarage,sum;
	scanf("%f", &firstNote);
	scanf("%f", &secondNote);
	scanf("%f", &thirdNote);
	scanf("%f", &forthNote);
	
	sum = firstNote + secondNote + thirdNote + forthNote;
	avarage = sum /4;
	
	if(avarage >=5){
		printf ("Aluno Aprovado\n Media Escolar: %.2f",avarage);
		
	} else {
		printf ("Aluno Reprovado\n Media Escolar: %.2f",avarage);
	}
	
	
}
