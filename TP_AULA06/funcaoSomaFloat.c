#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// assinatura da fun��o
float soma(float a, float b);

int main(int argc, char *argv[]) {
	float num1 = 6.75, num2 = 3.48;
	float num3;
	
	// o retorno da fun�ao soma sera impresso
	printf("%.1f + %.1f = %.1f\n", num1, num2, soma(num1, num2));
	
	// a fun��o soma retorna um float que ser�
	// armazenado pela vari�vel num3
	num3 = soma(num1, num2);
	
	printf("\nResultado: %.1f\n", num3);
	return 0;
}

// implementa��o fun��o
float soma(float a, float b) {
	float resultado;
	resultado = a + b;
	return resultado;
}
