#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menu() {
	system("cls");
	printf("\n*** MENU DE OP��ES ***\n\n");
	printf("1. Adi��o\n");
	printf("2. Subtra��o\n");
	printf("3. Multiplica��o\n");
	printf("4. Divis�o\n");
	printf("0. Sair\n");
	printf("\nDigite op��o: ");
}

float somar(float a, float b) {
	float resultado;
	resultado = a + b;
	return resultado;
}

float subtrair(float a, float b) {
	float resultado;
	resultado = a - b;
	return resultado;
}

float multiplicar(float a, float b) {
	float resultado;
	resultado = a * b;
	return resultado;
}

float dividir(float a, float b) {
	float resultado;
	resultado = a / b;
	return resultado;
}

void pausar() {
	printf("Digite qualquer tecla para continuar");
	getchar();
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int operacao;
	float n1, n2;
	
	// chama o procedimento para exibir o menu
	menu();
	// leia a opera��o digitada
	scanf("%d", &operacao);
	
	// repita at� o usu�rio digitar '0'
	while(operacao != 0) {
				
		printf("\nDigite dois n�meros: ");
		// leia os dois n�meros reais para a opera��o
		scanf("%f %f", &n1, &n2);
		// limpa o buffer do teclado
		fflush(stdin);
		
		switch(operacao) {
			// realiza a soma
			case 1:
				printf("\n%.1f + %.1f = %.1f\n", n1, n2, somar(n1, n2));
				//system("pause");
				pausar();
				break;
			// realiza a subtra��o
			case 2:
				printf("\n%.1f - %.1f = %.1f\n", n1, n2, subtrair(n1, n2));
				pausar();
				break;
			// realiza a multiplica��o
			case 3:
				printf("\n%.1f * %.1f = %.1f\n", n1, n2, multiplicar(n1, n2));
				pausar();
				break;
			// realiza a divis�o
			case 4:
				// verifica a divis�o por zero
				if(n1 != 0) {
					printf("\n%.1f / %.1f = %.1f\n", n1, n2, dividir(n1, n2));
				} else {
					printf("\nDivis�o de zero imposs�vel!\n");
				}
				pausar();
				break;
			// caso o usu�rio tenha digitado uma opera��o inv�lida
			default:
				printf("\nOpera��o digitada inv�lida!\n");
				
		}
		
		// chama o procedimento para exibir o menur
		menu();
		// leia a opera��o digitada
		scanf("%d", &operacao);		
	}
	
	return 0;
}

