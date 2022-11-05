#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL,"Portuguese");
	int i,numbers[10]={1,2,3,4,5,6,7,8,9,10},pot[10];
	
	for(i=0;i<10;i++){
		pot[i]= numbers[i] * numbers[i];
	}
	for(i=0;i<10;i++){
		printf("Primeiro Array: %d\n",numbers[i]);
	}
	for(i=0;i<10;i++){
		printf("Potencias: %d\n",pot[i]);
	}
	
}
