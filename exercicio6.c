#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL, "Portuguese");
	float numberValue;
	printf("Digite um Numero :");
	scanf("%f", &numberValue);
	
	
	if(numberValue >200 && numberValue <300){
		printf("%f esta no intervalo entre 200 e 300",numberValue);
	} else {
		printf("%f nao esta no intervalo entre 200 e 300",numberValue);
	}
	
}
