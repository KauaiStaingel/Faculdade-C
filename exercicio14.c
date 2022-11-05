#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL, "Portuguese");
	printf("Digite A Temperatura em Celsius :");
	
	float numberValue;
	scanf("%f", &numberValue);
	
	float transform = (9*numberValue + 160)/5;
	
	printf("A Temperatura Em Fahrenheit E %.2f",transform);

}
