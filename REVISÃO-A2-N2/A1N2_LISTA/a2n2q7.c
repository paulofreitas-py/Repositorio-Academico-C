#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void troca(float *a, float *b) {
	float aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
	
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	float l = 5.0, m = 10.0;
	
	printf("l � %.1f e m � %.1f.\n", l, m);
	
	printf("\nEfetuando a troca...\n");
	troca(&l, &m);
	
	printf("\nAgora l � %.1f e m � %.1f.\n", l, m);
	
	return 0;
}
