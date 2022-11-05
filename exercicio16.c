#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL, "Portuguese");
	printf("Digite 3 valores :");
	
	float firstValue,secondValue,thirdValue;
	scanf("%f", &firstValue);
	scanf("%f", &secondValue);
	scanf("%f", &thirdValue);
	
	if(firstValue >= secondValue && firstValue>= thirdValue && secondValue >= thirdValue){
		printf("%f,%f e %f",thirdValue,secondValue,firstValue);
	} else if(firstValue >= secondValue && firstValue>= thirdValue && secondValue <= thirdValue){
		printf("%f,%f e %f",secondValue,thirdValue,firstValue);
	}
	else if(secondValue >= firstValue && secondValue>= thirdValue && firstValue >= thirdValue){
		printf("%f,%f e %f",thirdValue,firstValue,secondValue);
	} else if(secondValue >= firstValue && secondValue>= thirdValue && firstValue <= thirdValue){
		printf("%f,%f e %f",firstValue,thirdValue,secondValue);
	} else if (thirdValue >= firstValue && thirdValue>= secondValue && firstValue >= secondValue){
		printf("%f,%f e %f",secondValue,firstValue,thirdValue);
	} else if(thirdValue >= firstValue && thirdValue>= secondValue && firstValue <= secondValue){
		printf("%f,%f e %f",firstValue,secondValue,thirdValue);
	}
}
