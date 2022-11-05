#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL, "Portuguese");
	printf("Digite Dois Numeros Distintos:");
	float number1,number2;
	
	scanf("%f",&number1);
	scanf("%f",&number2);
	
	if(number1>number2){
		printf("%.2f e maior que %.2f",number1,number2);
	} else if(number2>number1){
		printf("%.2f e maior que %.2f",number2,number1);
	}else {
		printf("os numeros sao iguais, tente novamente");
	}
}
