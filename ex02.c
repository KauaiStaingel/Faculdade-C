#include <stdio.h>
#include <locale.h>

int main(){
	
	setLocale(LC_ALL,"Portuguese");
	int i,numbers[10],value,payment,sum,card=0,cardtotal=0,money=0,moneytotal=0,cheque=0,chequetotal=0;
	
	printf("Entre com o Metodo de Pagamento e o Valor Pago\n");
	printf("Utilize 1 para Cartao, 2 para Dinheiro e 3 para Cheque\n");
	
	for(i=0;i<10;i++){
		scanf("%d",&payment);
		scanf("%d",&value);
		numbers[i]=value;
		if(payment == 1){
			card+=numbers[i];
			cardtotal ++;
		} 
		else if(payment == 2){
			money += numbers[i];
			moneytotal++;
		} 
		else if(payment == 3){
			cheque += numbers[i];
			chequetotal++;
		}
	}
	sum = card + money + cheque;
	
	printf("Contas pagas Em Cedulas:%d\nContas pagas Em Cheques:%d\nContas pagas Em Cartao:%d\n",moneytotal,chequetotal,cardtotal);
	printf("Valores no Dinheiro:%d\nValores no Cheque:%d\nValores no Cartao:%d\n",money,cheque,card);
	printf("Receita Total do dia:%d",sum);
	
	
	
}
