#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL, "Portuguese");
	float numberValue;
	printf("Digite um Numero :");
	scanf("%f", &number);
	
	
	if(number >200 && number <300){
		printf("%.2f esta no intervalo entre 200 e 300",number);
	} else {
		printf("%.2f nao esta no intervalo entre 200 e 300",number);
	}
	
}
