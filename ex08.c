#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL,"Portuguese");
	int i;
	float numbers[15],add,media,sum=0;
	for(i=0;i<15;i++){
		scanf("%f",&add);
		numbers[i]=add;
	}
	for(i=0;i<15;i++){
		sum+=numbers[i];
	}
	
	media = sum/15;
	printf("Media:%.2f",media);
}
