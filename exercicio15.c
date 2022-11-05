#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL, "Portuguese");
	printf("Digite A Temperatura em Fahrenheit :");
	
	float numberValue;
	scanf("%f", &numberValue);
	
	float transform = ((numberValue -32)*5)/9;
	
	printf("A Temperatura Em Celsius E %.2f",transform);

}
