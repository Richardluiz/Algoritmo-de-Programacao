#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int estoque1 = 0, estoque2 = 0, x, valor = 0;
	printf("<-------- Sistema de Estoque Paraju KS ---------->\n");
	printf("\nEntre com o estoque inicial de Tijolos empresa 1 - Tijolos KS: ");
	scanf("%d", &estoque1);
	printf("\nEntre com o estoque inicial de Tijolos empresa 2 - Tijolos Paraju: ");
	scanf("%d", &estoque2);
	printf("\n---------------------------------------\n");
	do{
		printf("\nO que deseja fazer:\n");
		printf("1 - Entrada de Estoque\n2 - Sa�da de Estoque\n3 - Transfer�ncia de Estoque\n4 - Consultar Estoque\n5 - Finalizar\n");
		printf("Op��o: ");
		scanf("%d", &x);
		switch(x) {
		case 1:
			printf("Qual empresa:\n1 - Tijolos KS\n2 - Tijolos Paraju\n");
			printf("Op��o: ");
			scanf("%d", &x);
			if(x == 1) {
				printf("\nQual a quantidade de Entrada de Tijolos em Tijolos KS: ");
				scanf("%d", &valor);
				estoque1 += valor;
				printf("\nEstoque Atualizado em Tijolos KS: %d\n", estoque1);
			} else if(x == 2) {
				printf("\nQual a quantidade de Entrada de Tijolos em Tijolos Paraju: ");
				scanf("%d", &valor);
				estoque2 += valor;
				printf("\nEstoque Atualizado em Tijolos Paraju: %d\n", estoque2);
			} else {
				printf("Op��o inv�lida!\n");
			}
			break;
		case 2:
			printf("Qual empresa:\n1 - Tijolos KS\n2 - Tijolos Paraju\n");
			printf("Op��o: ");
			scanf("%d", &x);
			if(x == 1) {
				printf("\nQual a quantidade de Sa�da de Tijolos em Tijolos KS: ", estoque1);
				scanf("%d", &valor);
				estoque1 -= valor;
				printf("\nEstoque Atualizado em Tijolos KS: %d\n", estoque1);
			} else if(x == 2) {
				printf("\nQual a quantidade de Sa�da de Tijolos em Tijolos Paraju: ", estoque2);
				scanf("%d", &valor);
				estoque2 -= valor;
				printf("\nEstoque Atualizado em Tijolos Paraju: %d\n", estoque2);
			} else {
				printf("Op��o inv�lida!\n");
			}
			break; 
		case 3:
			printf("Qual empresa:\n1 � Tijolos KS -> Tijolos Paraju\n2 � Tijolos Paraju -> Tijolos KS\n");
			printf("Op��o: ");
			scanf("%d", &x);
			if(x == 1) {
				printf("\nQuantidade de transfer�ncia de Tijolos - Tijolos KS para Tijolos Paraju: ");
				scanf("%d", &valor);
				if(valor > estoque1)
					printf("Imposs�vel transferir de Tijolos KS para Tijolos Paraju, estoque insuficiente!\n");
				else {
					printf("\nTransfer�ncia realizada!!!\n");
					estoque1 -= valor;
					estoque2 += valor;
				}
			} else if(x == 2) {
				printf("\nQuantidade de transfer�ncia de Tijolos - Tijolos KS para Tijolos Paraju: ");
				scanf("%d", &valor);
				if(valor > estoque2)
					printf("Imposs�vel transferir de Tijolos Paraju para Tijolos KS, estoque insuficiente!\n");
				else {
					printf("\nTransfer�ncia realizada!!!");
					estoque2 -= valor;
					estoque1 += valor;
				}
			} else {
				printf("Op��o inv�lida!\n");
			}
			printf("\nEstoque Atualizado em Tijolos KS: %d", estoque1);
			printf("\nEstoque Atualizado em Tijolos Paraju: %d", estoque2);
			break;
		case 4:
			printf("Estoque em Tijolos KS: %d\n", estoque1);
			printf("Estoque em Tijolos Paraju: %d\n", estoque2);
			break;
		case 5:
			printf("Bom dia e bom trabalho !!!\n");
			break;
		default:
			printf("Op��o inv�lida, tente outro n�mero!");
		}
	} while(x != 5);
	
}


