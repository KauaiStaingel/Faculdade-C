#include <stdio.h>
#include <locale.h>

int main(){
	setLocale(LC_ALL, "Portuguese");
	float firstValue, secondValue;
	
	printf("Insira os valores da base e da altura do triangulo respectivamente:");
	scanf("%f",&firstValue);
	scanf("%f",&secondValue);
	
	double sum,sub,mult,div;
	
	sum = firstValue + secondValue;
	sub = firstValue - secondValue;
	mult = firstValue * secondValue;
	div = firstValue / secondValue;
	
	printf("A soma Dos Valores E: %lf\n A subtracao Dos Valores E:%lf\n A multiplicacao Dos Valores E:%lf\n E A Divisao Dos Valores E:%lf",sum,sub,mult,div);
}
