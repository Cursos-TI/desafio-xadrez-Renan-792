#include <stdio.h>

int main()
{
	int torre = 0;
	int bispo = 0;
	int movimentoCavalo = 1;  

	int quantidade = 0;
	char direcao;

	printf("Digite a quantidade de casas da [TORRE] (entre 1 e 8): ");
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
		do {
			printf("Diagonal a direita\n");
			bispo ++;
		} while(bispo < quantidade);
	}

	// RAINHA

	printf("\nMovimento da Rainha:\n ");
	printf("Digite a quantidade de casas da [RAINHA] (entre 1 e 8): ");
	scanf("%d", &quantidade);

	if(quantidade < 1 || quantidade > 8) {
		printf("Limite ultrapassado! ");
	} else {
		for(int rainha= 1; rainha <= quantidade; rainha++ ) {
			printf("Rainha move-se para Esquerda\n");
		}
	}

// USANDO O [[ CAVALO ]]

	printf("\nEscolha a direcao [CAVALO]] (S > sobe / R > recuar / D > direita / E > Esquerda): ");
	scanf(" %c", &direcao); // espaco antes do %c para ignorar o \n

	if(direcao == 'S' || direcao == 's') {
		while (movimentoCavalo --) {
			for(int i = 0; i < 2; i++) {
				printf("Sobe\n");
			}
			printf("\nEscolha a direcao: D > direita / E > Esquerda): ");
			scanf(" %c", &direcao);

			if(direcao == 'D' || direcao == 'd') {

				printf("Direita\n");
			} else if (direcao == 'E' || direcao == 'e') {
				printf("Esquerda\n");
			} else {
				printf("Opcao invalida\n");
			}
		}
	}

	if(direcao == 'R' || direcao == 'r') {
		while (movimentoCavalo --) {
			for(int i = 0; i < 2; i++) {
				printf("Desce\n");
			}
			printf("\nEscolha a direcao: D > direita / E > Esquerda): ");
			scanf(" %c", &direcao);

			if(direcao == 'D' || direcao == 'd') {

				printf("Direita\n");
			} else if (direcao == 'E' || direcao == 'e') {
				printf("Esquerda\n");
			} else {
				printf("Opcao invalida\n");
			}
		}
	}

	if(direcao == 'D' || direcao == 'd') {
		while (movimentoCavalo --) {
			for(int i = 0; i < 2; i++) {
				printf("Direita\n");
			}
			printf("\nEscolha a direcao: S > Sobe / R > Recua): ");
			scanf(" %c", &direcao);

			if(direcao == 'S' || direcao == 's') {

				printf("Sobe\n");
			} else if (direcao == 'R' || direcao == 'r') {
				printf("Desce\n");
			} else {
				printf("Opcao invalida\n");
			}
		}
	}
	

	if(direcao == 'E' || direcao == 'e') {
		while (movimentoCavalo --) {
			for(int i = 0; i < 2; i++) {
				printf("Esquerda\n");
			}
			printf("\nEscolha a direcao: S > Sobe / R > Recua): ");
			scanf(" %c", &direcao);

			if(direcao == 'S' || direcao == 's') {

				printf("Sobe\n");
			} else if (direcao == 'R' || direcao == 'r') {
				printf("Desce\n");
			} else {
				printf("Opcao invalida\n");
			}
		}
	}

	return 0;
}
	// AVANÇADO 
  /*
  void moverTorre( int casas) {
	if ( casas > 0) {
		printf("Direita\n");
		moverTorre (casas - 1);
	}
}

void moverBispo (int casas){
    if (casas > 0){
        printf("Cima Diagonal Direta\n");
        moverBispo (casas - 1);
    }
}

void moverRainha( int casas) {
	if ( casas > 0) {
		printf("Esquerda\n");
		moverRainha (casas - 1);
	}
}

void moverCavalo( int casas) {
	if ( casas > 0) {
		printf("Cima\n");
		moverCavalo (casas - 1);
	}
}

int main() {

	printf("TORRE\n---------------------\n");
	moverTorre(5);

	printf("\nBISPO\n---------------------\n");
	moverBispo(5);

	printf("\nRAINHA\n---------------------\n");
	moverRainha(5);

	printf("\nCAVALO\n---------------------\n");
	moverCavalo(2);
	printf("Direita");
  */
}
