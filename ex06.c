#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL,"Portuguese");
	int i,numbers[8]={1,2,3,4,5,6,7,8},x=numbers[0],y=numbers[7],sum;
	sum = x + y;
	printf("%d",sum);
	
	
}
