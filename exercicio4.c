#include <stdio.h>
#include <locale.h>

int main (){
	
	setLocale(LC_ALL, "Portuguese");
	char name[40];
	float firstNote, secondNote, thirdNote;
	
	printf("Insira o Primeiro Nome Do Aluno e suas 3 Notas:");
	
	scanf("%s",&name);
	scanf("%f",&firstNote);
	scanf("%f",&secondNote);
	scanf("%f",&thirdNote);
	
	float weights = firstNote * 2 + secondNote * 4 + thirdNote * 6;
	float avarage = firstNote + secondNote + thirdNote;
	float weightedAvarage = weights/avarage;
	
	printf("O Aluno %s teve A Media de %f",name,weightedAvarage);
	
}
