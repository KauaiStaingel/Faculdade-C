#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL,"Portuguese");
	int i,numbers[10],add,negative=0,media,sum;
	
	printf("Entre com 10 Numeros:\n");
	
	for(i=0;i<10;i++){
		scanf("%d",&add);
		numbers[i]=add;
	}
	for(i=0;i<10;i++){
		if(numbers[i]<0){
			sum+=numbers[i];
			negative++;
			printf("\nNegativo: %d",numbers[i]);
		}
	}
	media = sum/negative;
	printf("\nA media eh: %d",media);
	
	
}
