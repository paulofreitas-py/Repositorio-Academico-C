#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menu() {
	//system("cls");
	printf("\n*** MENU DE OP��ES ***\n\n");
	printf("1. Adi��o\n");
	printf("2. Subtra��o\n");
	printf("3. Multiplica��o\n");
	printf("4. Divis�o\n");
	printf("0. Sair\n");
	printf("\nDigite op��o:");
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int operacao;
	
	do {
		menu();
		scanf("%d", &operacao);
	} while(operacao != 0);
	
	return 0;
}
