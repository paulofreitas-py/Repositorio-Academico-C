#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	
	int num, i, numMaior = -9999999, numMenor = 9999999;
	
	for(i = 0; i < 20; i++){
		printf("Digite um n�mero: ");
		scanf("%d", &num);
		
		// verifica se o n�mero � menor
		if(num < numMenor) {
			numMenor = num;
		}
		// verifica se o n�mero � maior
		if(num > numMaior) {
			numMaior = num;
		}
	}
	
	// Imprime o maior n�mero
	printf("O maior n�mero � %d", numMaior);
	// Imprime o menor n�mero
	printf("O menor n�mero � %d", numMenor);
	return 0;
}
