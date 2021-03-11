#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


// protipo para fun��o divisivelPorTres(int n)
int divisivelPorTres(int num);

// fun��o principal main()
int main() {
	setlocale(LC_ALL, "");
	
	int num;
	printf("Digite um n�mero (ou 0 para sair): ");
	scanf("%d", &num);
	fflush(stdin);
	
	// loop que repete at� o usu�rio digitar '0'
	while(num != 0) {
		// verifica se num � divisivel por 3
		if(divisivelPorTres(num) == 1) {
			printf("\n%d � divis�vel por 3.", num);
		} else {
			printf("\n%d n�o � divis�vel por 3.", num);
		}
		
		printf("\nDigite um n�mero (ou 0 para sair): ");
		scanf("%d", &num);
		fflush(stdin);
		
	}
	
	return 0;
}

// implementa��o da fun��o divisivelPorTres
int divisivelPorTres(int n) {
	// verifica se n � divis�vel por 3
	if(n % 3 == 0) {
		return 1; // retorna 1 (verdadeiro) para onde foi chamado
	}
	
	return 0; // retorna 0 (falso) para onde foi chamado
}
