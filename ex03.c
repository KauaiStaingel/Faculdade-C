#include <stdio.h>
#include <locale.h>

int main (){
	//setLocale(LC_ALL, "Portuguese");
	int numbers[10],sum,i,add,totalnumber,media;
	printf("Entre com 10 numeros inteiros maiores que 0:\n");
	
	for(i=0;i<10;i++){
		scanf("%d",&add);
		numbers[i] = add;
	}
	for(i=0;i<10;i++){
		if(numbers[i]%2!=0){
			sum+= numbers[i];
			totalnumber++;
		}
	}
	media = sum / totalnumber;
	printf("%d",media);
}
