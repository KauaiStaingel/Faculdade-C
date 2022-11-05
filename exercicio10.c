#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL, "Portuguese");
	printf("Digite 3 Numeros :\n");
	
	float firstNumber,secondNumber,thirdNumber;
	scanf("%f",&firstNumber);
	scanf("%f",&secondNumber);
	scanf("%f",&thirdNumber);
	
	float avarage = (firstNumber + secondNumber + thirdNumber)/3;
	printf("A Media Dos Numeros E: %.2f",avarage);

}
