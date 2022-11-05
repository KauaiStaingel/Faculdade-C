#include <stdio.h>
#include <locale.h>

int main (){
	
	setLocale(LC_ALL, "Portuguese");
	printf("Digite Dois Numeros:")
	int number1,number2;
	scanf("%d",&number1);
	scanf("%d",&number2);
	
	if(number1 == number2){
		printf("os Numeros Sao Iguais");
	} else if (number1 > number2){
		printf("%d e maior que %d",number1, number2);
	} else{
		printf("%d e maior que %d",number2,number1);
	}
}
