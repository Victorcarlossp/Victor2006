#include <stdio.h>
#include <stdlib.h>

int main(){
	char opcao;

	do {
		float num1,num2, resultado;
		char operador;

		printf("Digite o operador (+, -, *, /): ");
		scanf(" %c", &operador);

		printf("Digite o primeiro numero: ");
		scanf("%f", &num1);

		printf("Digite o segundo numero: ");
		scanf("%f", &num2);

		switch(operador) {
			case '+':
				resultado = num1 + num2;
				break;
			case '-':
				resultado = num1 - num2;
				break;
			case '*':
				resultado = num1 * num2;
			case '/':
				if(num2 != 0) {
				resultado = num1 / num2;
			} else {
			printf("Erro: voce fez com zero!\n");
			continue;
			}
			break; 
		default:
			printf("Deu erro na sua operacao!\n");
			continue;
		}

		printf("Resultado: %.2f\n", resultado);

		printf("quer continuar? (S/N): ");
		scanf(" %c", &opcao);

	} while(opcao == 'S' || opcao == 's');

	return 0;
}

