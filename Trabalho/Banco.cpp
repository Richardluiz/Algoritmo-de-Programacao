#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	char nome[40];
	float saldoCC = 0, saldoCP = 0, valor = 0;
	int x, numCC = 0, numCP = 0;
	printf("<-------- Sistema de Banco ---------->\n");
	printf("\nEntre com o nome do cliente: ");
	scanf("%s", &nome);
	printf("\nEntre com o número da Conta Corrente: ");
	scanf("%d", &numCC);
	printf("\nEntre com o saldo inicial da Conta Corrente %d: ", numCC);
	scanf("%f", &saldoCC);
	printf("\nEntre com o número da Conta Poupança: ");
	scanf("%d", &numCP);
	printf("\nEntre com o saldo inicial da Conta Poupança %d: ", numCP);
	scanf("%f", &saldoCP);
	printf("\n---------------------------------------\n");
	do{
		printf("\nQual operação deseja realizar: \n");
		printf("1 - Creditar\n2 - Debitar\n3 - Transferir\n4 - Saldo\n5 - Sair\n");
		printf("Opção: ");
		scanf("%d", &x);
		switch(x) {
		case 1:
			printf("Qual conta:\n1 - Corrente\n2 - Poupança\n");
			printf("Opção: ");
			scanf("%d", &x);
			if(x == 1) {
				printf("\nQual valor a creditar na conta corrente %d: ", numCC);
				scanf("%f", &valor);
				saldoCC += valor;
				printf("\nSaldo atual na Conta Corrente %d: %.2f\n", numCC, saldoCC);
			} else if(x == 2) {
				printf("\nQual valor a creditar na conta poupança %d: ", numCP);
				scanf("%f", &valor);
				saldoCP += valor;
				printf("\nSaldo atual na Conta Poupança %d: %.2f\n", numCP, saldoCP);
			} else {\
				printf("Opção inválida!\n");
			}
			break;
		case 2:
			printf("Qual conta:\n1 - Corrente\n2 - Poupança\n");
			printf("Opção: ");
			scanf("%d", &x);
			if(x == 1) {
				printf("\nQual valor a debitar na conta corrente %d: ", numCC);
				scanf("%f", &valor);
				saldoCC -= valor;
				printf("\nSaldo atual na Conta Corrente %d: %.2f\n", numCC, saldoCC);
			} else if(x == 2) {
				printf("\nQual valor a debitar na conta poupança %d: ", numCP);
				scanf("%f", &valor);
				saldoCP -= valor;
				printf("\nSaldo atual na Conta Poupança %d: %.2f\n", numCP, saldoCP);
			} else {\
				printf("Opção inválida!\n");
			}
			break; 
		case 3:
			printf("Entre:\n1 - Conta Corrente para Poupança\n2 - Conta Poupança para Corrente\n");
			printf("Opção: ");
			scanf("%d", &x);
			if(x == 1) {
				printf("\nQual o valor a transferir da CC %d para a CP %d: ", numCC, numCP);
				scanf("%f", &valor);
				if(valor > saldoCC)
					printf("Saldo Insuficiente!");
				else {
					saldoCC -= valor;
					saldoCP += valor;
				}
			} else if(x == 2) {
				printf("\nQual o valor a transferir da CP %d para a CC %d: ", numCP, numCC);
				scanf("%f", &valor);
				if(valor > saldoCP)
					printf("Saldo Insuficiente!");
				else {
					saldoCP -= valor;
					saldoCC += valor;
				}
			} else {
				printf("Opção inválida!\n");
			}
			printf("\nSaldo atual na Conta Corrente %d: %.2f", numCC, saldoCC);
			printf("\nSaldo atual na Conta Poupança %d: %.2f", numCP, saldoCP);
			break;
		case 4:
			printf("Senhor %s\n", nome);
			printf("Saldo da sua conta corrente %d: %.2f\n", numCC, saldoCC);
			printf("Saldo da sua conta poupança %d: %.2f\n", numCP, saldoCP);
			break;
		case 5:
			printf("Obrigado por trabalhar com o nosso banco!!!\n");
			break;
		default:
			printf("Opção inválida, tente outro número!");
		}
	} while(x != 5);
	
}


