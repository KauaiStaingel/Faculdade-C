#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL, "Portuguese");
	printf("Digite O Nome Do Aluno E Suas Notas :\n");
	
	float firstNumber,secondNumber,thirdNumber;
	
	char name[40];
	scanf("%s",&name);
	scanf("%f",&firstNumber);
	scanf("%f",&secondNumber);
	scanf("%f",&thirdNumber);
	
	float avarage = (firstNumber + secondNumber + thirdNumber)/3;
	printf("Nome:%s\n Media:%.2f",name,avarage);
}
