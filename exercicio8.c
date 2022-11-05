#include <stdio.h>
#include <locale.h>

int main (){
	
	setLocale(LC_ALL, "Portuguese");
	int age ;
	printf("Digite A Idade Do Jogador:");
	scanf("%d",&age);
	
	char defaultMsg[40] = "O Jogador Esta Na Categoria";
	
	if(age <=13){
		printf(" %s Infantil",defaultMsg);
	} else if (age<=17){
		printf(" %s Juvenil",defaultMsg);
	} else{
		printf(" %s Senior",defaultMsg);
	}
}
