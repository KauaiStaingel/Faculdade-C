#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL, "Portuguese");
	printf("Digite 1 Numeros :\n");
	
	int firstNumber;
	scanf("%d",&firstNumber);
	
	if(firstNumber % 2 == 0){
		printf("O Numero %.2d eh par",firstNumber);
	} else {
		printf("O Numero %.2d eh impar",firstNumber);
	}

}
