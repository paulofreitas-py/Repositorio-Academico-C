#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	
	int num, i, somaImpares = 0;
	// la�o de repti��o para digitar cinco n�meros
	for(i = 0; i < 5; i++) {
		printf("Digite um n�mero: ");
		scanf("%d", &num);
		// verifica se 100 <= num <= 200 e se num � impar
		if(num % 2 != 0 && (num >= 100 && num <= 200)) {
			somaImpares += num; // somaImpares = somaImpares + num;
		}
	}
	// imprime a soma dos n�meros impares digitados
	printf("\nSoma dos n�meros �mpares � igual a %d", somaImpares);
	
	return 0;
}
