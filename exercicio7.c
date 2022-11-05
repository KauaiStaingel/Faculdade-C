#include <stdio.h>
#include <locale.h>

int main (){
	
	setLocale(LC_ALL, "Portuguese");
	int totalCopies;
	float finalPrice;
	printf("Insira O Total De Copias\n");
	scanf("%d",&totalCopies);
	
	if(totalCopies >=200){
		finalPrice = totalCopies *0.3;
		printf("O preco Final Foi De %.2f",finalPrice);
	} else {
		finalPrice = totalCopies * 0.5;
		printf("O preco Final Foi De %.2f",finalPrice);
	}
}
