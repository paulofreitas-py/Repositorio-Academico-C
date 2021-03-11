#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	
	// declara um vetor de inteiro de 10 posi��es
	int numeros[10];
	int maior = -99999, menor = 99999;
	int i;
	
	// loop/la�o para preencher o vetor numeros
	for (i = 0; i < 10; i++) {
		printf("Digite n�mero: ");
		scanf("%d", &numeros[i]);
		// limpa o buffer do teclado
		fflush(stdin);
	}
	
	// loop para verificar o maior e menor n�mero
	for (i = 0; i < 10; i++) {
		// verifica o maior n�mero
		if(numeros[i] > maior) {
			maior = numeros[i];
		}
		// verifica o menor n�mero
		if(numeros[i] < menor) {
			menor = numeros[i];
		}
		
	}
	
	
	// imprime o maior e menor n�mero
	printf("\nMaior n�mero � %d", maior);
	printf("\nMenor n�mero � %d\n", menor);
	return 0;
}
