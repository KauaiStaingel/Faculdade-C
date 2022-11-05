#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL, "Portuguese");
	printf("Digite 2 valores :");
	
	int firstNumber,secondNumber,sub;
	scanf("%d", &firstNumber);
	scanf("%d", &secondNumber);
	
	if(firstNumber >= secondNumber){
		sub = firstNumber - secondNumber;
		printf("%d", sub);
	} else{
			sub = secondNumber - firstNumber;
			printf("%d", sub);
		}
	

	

	
}
