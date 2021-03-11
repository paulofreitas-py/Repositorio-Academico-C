#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// prototipo para a fun��o que calcula a pot�ncia
int potencia(int numero, int expoente);

// fun��o principal main()
int main() {
	setlocale(LC_ALL, "");
	// declara duas vari�veis para armazenar numero e potencia
	// digitados pelo usu�rio
	int num, pot;
	
	// captura os valores digitados pelo usu�rio
	printf("Digite um n�mero a pot�ncia: ");
	scanf("%d %d", &num, &pot);
	
	// imprime a pot�ncia calculada chamando
	// a fun��o potencia(num, pot)
	printf("\n%d ^ %d = %d", num, pot, potencia(num, pot));
	
	return 0;
}

// implementa��o da fun��o pot�ncia
int potencia(int numero, int expoente) {
	int i, resultado = numero;
	// loop para calcular a repeti��o de multiplica��es
	for(i = 1; i < expoente; i++) {
		resultado *= numero; // resultado = resultado * numero;
	}
	
	// retorna para onde foi chamado o valor da pot�ncia calculada
	return resultado;	
}

// 3 ^ 3 = 3 * 3 * 3 duas repeti��es de multiplca��o
// i de 1 at� 2 (3 - 1 ou seja 'i < expoente')

// resultado = 3 * 3
// resultado = 9 * 9
