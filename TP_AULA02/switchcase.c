#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"");
	int opcao;
	
	printf("Digite o c�digo do curso: ");
	scanf("%d", &opcao);
	
	switch(opcao) {
		case 1:
			printf("\nVoc� pertence ao curso de psicologia.\n");
		break;
		case 2:
			printf("\nVoc� pertence ao curso de gastronomia.\n");
		break;
		case 3:
			printf("\nVoc� pertence ao curso de f�rmacia.\n");
		break;
		case 4:
			printf("\nVoc� pertence ao curso de enfermagem.\n");
		break;
		case 5:
			printf("\nVoc� pertence ao curso de gest�o da tecnologia da informa��o.\n");
		break;
		case 6:
			printf("\nVoc� pertence ao curso de engenharia el�trica.\n");
		break;
		case 7:
			printf("\nVoc� pertence ao curso de ci�ncia da computa��o.\n");
		break;
		default:
			printf("\nVoc� pertence a curso algum da UNIFG.\n");
	}
	
	return 0;
}
