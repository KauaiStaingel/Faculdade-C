#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL,"Portuguese");
	int i,sex,age,manAge=0,totalManAge=0,percentualPeople=0, peopleAge=0,finalPorc;
	float height,womanHeight=0,totalWomanHeight=0,mediaGroup,mediaHeight,mediaAge;
	
	printf("Utilize 1 para Homem, 0 para Mulher\n");
	printf("Entre tambem com Idade e Altura respectivamente.\n");
	
	for(i=0;i<1000;i++){
		scanf("%d",&sex);
		scanf("%d",&age);
		scanf("%f",&height);
		
		peopleAge+=age;
		
		

		if(age>=18 && age <=35){
			percentualPeople++;
		}
		
		if(sex == 1){
			totalManAge++;
			manAge+=age;		
		} 
		else if(sex == 0){
			womanHeight+=height;
			totalWomanHeight++;
			
		}
		
	}
	
	
	mediaHeight = womanHeight / totalWomanHeight;
	
	mediaGroup=peopleAge/1000;
	
	mediaAge = manAge / totalManAge;
	
	finalPorc = percentualPeople/10;
	
	
	printf("Media Idade do Grupo: %f\n ",mediaGroup);
	printf("Media Altura Mulheres: %f\n ",mediaHeight);
	printf("Media Idade Homens: %f\n ",mediaAge);
	printf("Percentual Pessoas Entre 18 e 35 anos: %d\n ",finalPorc);

	
}
