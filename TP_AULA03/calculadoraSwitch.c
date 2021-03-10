#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	
	float operando, operador;
	char operacao;
	
	printf("Digite dois n�meros: ");
	scanf("%f %f", &operando, &operador);
	fflush(stdin);
	
	printf("\nDigite a opera��o (+, -, *, /): ");
	scanf("%c", &operacao);
	
//	printf("Digite dois n�meros e opera��o (n�mero opera��o n�mero): ")
//	scanf("%f %c %f", &operando, &operacao, &operador);
	
	switch(operacao) {
		case '+':
			printf("\nResultado de %.2f + %.2f = %.2f", operando, operador, operando + operador);
			break;
		case '-':
			printf("\nResultado de %.2f - %.2f = %.2f\n", operando, operador, operando - operador);
			break;
		case '*':
			printf("\nResultado de %.2f * %.2f = %.2f\n", operando, operador, operando * operador);
			break;
		case '/':
			if(operador != 0) {
				printf("Resultado de %.2f / %.2f = %.2f\n", operando, operador, operando / operador);
			} else {
				printf("\nDivis�o imposs�vel!\n");
			}
			break;
		default:
			printf("\nOpera��o digitada � inv�lida!\n");
	}
	
	system("pause");
	
	return 0;
}
