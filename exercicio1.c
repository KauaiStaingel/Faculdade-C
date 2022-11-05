#include <stdio.h>
#include <locale.h>


int main (){
	
	setLocale(LC_ALL, "Portuguese");
	int pair[10],odd[10],numbers[10],receive,i;
	
	printf("Entre com 10 numeros inteiros maiores que 0:\n");
	for(i=0;i<10;i++){
		scanf("%d",&receive);
		numbers[i] = receive;
	
	}
	for(i=0;i<10;i++){
		if(numbers[i]%2==0){
			pair[i]=numbers[i];
		}
		else{
			odd[i]=numbers[i];
		}
	}
	
	for(i=0;i<10;i++){
		printf("\nNumeros: %d", numbers[i]);
	}
	for(i=0;i<10;i++){
		printf("\nPares: %d", pair[i]);
	}
	for(i=0;i<10;i++){
		printf("\nImpares: %d", odd[i]);
	}
}
