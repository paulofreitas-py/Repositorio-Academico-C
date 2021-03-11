#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	
	int matriz[3][3], escalar = 5, i, j;
	
	// preenchendo a matriz
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("Digite um n�mero para posi��o [%d][%d]: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
			fflush(stdin);
		}
	}
	
	// imprimindo a matriz e multiplicando pelo escalar
	printf("\nA matriz digitada �:\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			// imprime o elemento da matriz
			printf("%d\t", matriz[i][j]);
			
			// fazendo a multiplica��o
			matriz[i][j] = matriz[i][j] * escalar;
			//matriz[i][j] *= escalar;
		}
		printf("\n");
	}
	
	// imprimindo o resultado da multiplica��o
	printf("\nResultado da multiplica��o pelo escalar �:\n");
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
