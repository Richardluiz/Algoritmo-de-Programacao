#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int estoque1 = 0, estoque2 = 0, x, valor = 0;
	printf("<-------- Sistema de Estoque Jatiboca ---------->\n");
	printf("\nEntre com o estoque inicial de açúcar empresa 1 - Jatiboca: ");
	scanf("%d", &estoque1);
	printf("\nEntre com o estoque inicial de açúcar empresa 2 - Pontal: ");
	scanf("%d", &estoque2);
	printf("\n---------------------------------------\n");
	do{
		printf("\nO que deseja fazer:\n");
		printf("1 - Entrada de Estoque\n2 - Saída de Estoque\n3 - Transferência de Estoque\n4 - Consultar Estoque\n5 - Finalizar\n");
		printf("Opção: ");
		scanf("%d", &x);
		switch(x) {
		case 1:
			printf("Qual empresa:\n1 - Jatiboca\n2 - Pontal\n");
			printf("Opção: ");
			scanf("%d", &x);
			if(x == 1) {
				printf("\nQual a quantidade de Entrada de açúcar em Jatiboca: ");
				scanf("%d", &valor);
				estoque1 += valor;
				printf("\nEstoque Atualizado em Jatiboca: %d\n", estoque1);
			} else if(x == 2) {
				printf("\nQual a quantidade de Entrada de açúcar em Pontal: ");
				scanf("%d", &valor);
				estoque2 += valor;
				printf("\nEstoque Atualizado em Pontal: %d\n", estoque2);
			} else {
				printf("Opção inválida!\n");
			}
			break;
		case 2:
			printf("Qual empresa:\n1 - Jatiboca\n2 - Poupança\n");
			printf("Opção: ");
			scanf("%d", &x);
			if(x == 1) {
				printf("\nQual a quantidade de Saída de açúcar em Jatiboca: ", estoque1);
				scanf("%d", &valor);
				estoque1 -= valor;
				printf("\nEstoque Atualizado em Jatiboca: %d\n", estoque1);
			} else if(x == 2) {
				printf("\nQual a quantidade de Saída de açúcar em Pontal: ", estoque2);
				scanf("%d", &valor);
				estoque2 -= valor;
				printf("\nEstoque Atualizado em Pontal: %d\n", estoque2);
			} else {
				printf("Opção inválida!\n");
			}
			break; 
		case 3:
			printf("Qual empresa:\n1 – Jatiboca -> Pontal\n2 – Pontal -> Jatiboca\n");
			printf("Opção: ");
			scanf("%d", &x);
			if(x == 1) {
				printf("\nQuantidade de transferência de açúcar - Jatiboca para Pontal: ");
				scanf("%d", &valor);
				if(valor > estoque1)
					printf("Impossível transferir de Pontal para Jatiboca, estoque insuficiente!\n");
				else {
					printf("\nTransferência realizada!!!\n");
					estoque1 -= valor;
					estoque2 += valor;
				}
			} else if(x == 2) {
				printf("\nQuantidade de transferência de açúcar - Pontal para Jatiboca: ");
				scanf("%d", &valor);
				if(valor > estoque2)
					printf("Impossível transferir de Pontal para Jatiboca, estoque insuficiente!\n");
				else {
					printf("\nTransferência realizada!!!");
					estoque2 -= valor;
					estoque1 += valor;
				}
			} else {
				printf("Opção inválida!\n");
			}
			printf("\nEstoque Atualizado em Jatiboca: %d", estoque1);
			printf("\nEstoque Atualizado em Pontal: %d", estoque2);
			break;
		case 4:
			printf("Estoque em Jatiboca: %d\n", estoque1);
			printf("Estoque em Pontal: %d\n", estoque2);
			break;
		case 5:
			printf("Bom dia e bom trabalho !!!\n");
			break;
		default:
			printf("Opção inválida, tente outro número!");
		}
	} while(x != 5);
	
}


