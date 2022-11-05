#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL,"Portuguese");
	int i,numbers[10]={1,2,3,4,2,6,7,8,9,10},sum=0;
	
	for(i=0;i<10;i++){
		if(numbers[i]==numbers[0] && i != 0){
			printf("%d\n",numbers[i]);
			sum++;
		}
		else if(numbers[i]==numbers[1] && i != 1){
			printf("%d\n",numbers[i]);
			sum++;
		}
		else if(numbers[i]==numbers[2] && i != 2){
			printf("%d\n",numbers[i]);
			sum++;
		}
		else if(numbers[i]==numbers[3] && i != 3){
			printf("%d\n",numbers[i]);
			sum++;
		}
		else if(numbers[i]==numbers[4] && i != 4){
			printf("%d\n",numbers[i]);
			sum++;
		}
		else if(numbers[i]==numbers[5] && i != 5){
			printf("%d\n",numbers[i]);
			sum++;
		}
		else if(numbers[i]==numbers[6] && i != 6){
			printf("%d\n",numbers[i]);
			sum++;
		}
		else if(numbers[i]==numbers[7] && i != 7){
			printf("%d\n",numbers[i]);
			sum++;
		}
		else if(numbers[i]==numbers[8] && i != 8){
			printf("%d\n",numbers[i]);
			sum++;
		}
		else if(numbers[i]==numbers[9] && i != 9){
			printf("%d\n",numbers[i]);
			sum++;
		}
	} 
	if(sum==0){
		printf("Nenhum Numero Repetido.");
	}

}
