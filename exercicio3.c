#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL, "Portuguese");
	float basicSalary, extraSell;
	char name[40];
	
	printf("Insira O Primeiro Nome, Salario e as Vendas em Dinheiro Abaixo respectivamente:");
	
	
	scanf ("%s",&name);
	scanf ("%f",&basicSalary);
	scanf ("%f",&extraSell);
	
	float extraBonus = extraSell * 0.2;
	float finalSalary = basicSalary + extraBonus;
	
	printf ("Nome: %s\n Salario Fixo:%f\n Salario Final:%f",name,basicSalary,finalSalary);
	
}
