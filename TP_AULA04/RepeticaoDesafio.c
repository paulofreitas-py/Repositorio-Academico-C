#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	
	int num, fat;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	for(fat = 1; num > 1; num--) {
		fat *= num; //fat = fat * num;
	}
	// Teste de mesa do algoritmo
	// Repeti��o #1: fat = 1 , num = 4 --> fat = 4
	// Repeti��o #2: fat = 4, num = 3 --> fat = 12
	// Repeti��o #3: fat = 12, num = 2 --> fat = 24
	// fat = 24, num = 1 --> fat = 24
	
	// Imprime o fatorial calculado
	printf("\nFatorial � igual a %d", fat);
	
	return 0;
}
