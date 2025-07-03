#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
#include <stdio.h>

int main()
{

	int torre = 0;
	int bispo = 0;

	int quantidade = 0;
	char direcao;

	printf("Digite a quantidade de casas da [Torre] (entre 1 e 8): ");
	scanf("%d", &quantidade);

	while(getchar() != '\n');

	printf("\nEscolha a direcao (S > sobe / R > recuar / D > direita / E > Esquerda): ");
	scanf("%c", &direcao);


	if(quantidade < 1 || quantidade > 8) {
		printf("Voce ultrapassou o limite permitido :/\n");

	} else if (direcao == 'S' || direcao == 's') {
		while(torre < quantidade) {
			printf("Torre subindo\n" );
			torre++;
		}
	} else if(direcao == 'R' || direcao == 'r') {
		while(torre < quantidade) {
			printf("Torre recuando\n");
			torre++;
		}
	} else if(direcao == 'D' || direcao == 'd') {
		while(torre < quantidade) {
			printf ("Torre lado direito\n");
			torre ++;
		}
	} else if(direcao == 'E' || direcao == 'e') {
		while(torre >- quantidade) {
			printf("Torre lado esquerdo\n");
			torre--;
		}
	}  else {
		printf("Zero nao sobe nem desce! \n");
	}

// BISPO

	printf("\nMovimento do Bispo na diagonal:\n ");
	printf("Digite a quantidade de casas da [BISPO] (entre 1 e 8): ");
	scanf("%d", &quantidade);

	if(quantidade < 1 || quantidade > 8 ) {
		printf("\nNumero invalido!\n");
	    } else {
		    ("Bispo Movimentado-se para diagonal a direita\n");
		  do{
		      printf("Diagonal a direita\n");
		      bispo ++;
		  } while(bispo < quantidade);
    }
    
    // RAINHA

	printf("\nMovimento da Rainha:\n ");
	printf("Digite a quantidade de casas da [RAINHA] (entre 1 e 8): ");
	scanf("%d", &quantidade);
	
	if(quantidade < 1 || quantidade > 8){
	    printf("Limite ultrapassado! ");
	}else{
	    for(int rainha= 1; rainha <= quantidade; rainha++ ){
	        printf("Rainha move-se para Esquerda\n");
	    }
	}

		return 0;
}
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
