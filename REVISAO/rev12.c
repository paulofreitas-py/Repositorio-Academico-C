#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// implementa��o do procedimento menu()
void menu() {
	// limpar a tela
	system("cls");
	printf("\n*** MENU DE OP��ES ***\n");
	printf("\n(1) para armazenar 02 notas e os nomes de 05 alunos em um vetor.");
	printf("\n(2) para exibir a m�dia geral dos alunos.");
	printf("\n(3) para exibir os nomes e as notas dos alunos.");
	printf("\n(4) para exibir as m�dias e status de aprova��o dos alunos.");
	printf("\n(0) para sair.\n");
	printf("\nSelecione a opc�o desejada: ");
}

int main() {
	setlocale(LC_ALL, "");
	// declara uma matriz de string para 5 alunos
	char nomes[5][10];
	// declara uma matriz de notas para 5 alunos
	float notas[5][2];
	// declara as vari�veis de controle do programa
	int i, opcao;
	// declara uma vari�vel para calculo da m�dia
	float media = 0.0;
	
	// chama o procedimento menu() para exibir menu de op��es
	menu();
	// armazena a op��o digitada
	scanf("%d", &opcao);
	fflush(stdin);
	
	// loop que se repete at� a op��o seja igual a zero
	while(opcao != 0) {
		// testa opcao digitada
		switch(opcao) {
			case 1:
				// armazena nomes e notas de cinco alunos
				for(i = 0; i < 5; i++) {
					printf("Digite nome: ");
					fgets(nomes[i], 10, stdin);
					printf("Digite as duas notas: ");
					scanf("%f %f", &notas[i][0], &notas[i][1]);
					fflush(stdin);
				}
				
				// pausa o programa
				printf("\n\nDigite qualquer tecla para continuar...");
				getchar();
				
				break;
			case 2:
				// calcula e mostra a m�dia geral dos alunos
				for(i = 0; i < 5; i++) {
					// somatoria de todas as notas de todos os alunos
					media += notas[i][0] + notas[i][1];
				}
				
				media /= (5 * 2); // media = media / (5 * 2)
				printf("\nM�dia Geral: %.1f", media);
				
				// pausa o programa
				printf("\n\nDigite qualquer tecla para continuar...");
				getchar();
				
				break;
			case 3:
				// imprime lista de alunos e suas notas
				for(i = 0; i < 5; i++) {
					printf("\nNome: %s", nomes[i]);
					printf("\nNotas: %.1f %.1f", notas[i][0], notas[i][1]);
				}
				
				// pausa o programa
				printf("\n\nDigite qualquer tecla para continuar...");
				getchar();
				
				break;
			case 4:
				// imprime lista de m�dia e situa��o dos alunos
				for(i = 0; i < 5; i++) {
					printf("\nNome: %s", nomes[i]);
					media = (notas[i][0] + notas[i][1]) / 2;
					printf("\nM�dia %.1f", media);
					if( media >= 7.0) {
						printf("\nSitua��o: Aprovado");
					} else {
						printf("\nSitua��o: Reprovado");
					}
				}
				
				// pausa o programa
				printf("\n\nDigite qualquer tecla para continuar...");
				getchar();
				
				break;
			default:
				printf("\nOp��o digitada inv�lida!");
				
				// pausa o programa
				printf("\n\nDigite qualquer tecla para continuar...");
				getchar();	
				
		}
		
		// chama o menu de op��es novamente
		menu();
		scanf("%d", &opcao);
		fflush(stdin);
	}
	
	return 0;
}
