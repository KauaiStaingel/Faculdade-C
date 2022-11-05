#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL,"Portuguese");
	int i,numbers[10]={1,2,-2,3,4,0,5,-10,3,5};
	for(i=0;i<10;i++){
		if(numbers[i]<0){
			numbers[i]=0;
		}
		printf("%d\n",numbers[i]);
	}
	

}
