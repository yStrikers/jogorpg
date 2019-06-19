#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

	char nome[60];
	
	char rolar_dado[10];
	int numero_sortido1;
	
	int vida = 0;
	int defesa = 0;
	int forca = 0;
	
	float velocidade = 0;
	
	float velocidadeBasica = 0.75;
	int vidaBasica = 100;
	int defesaBasica = 35;
	int forcaBasica = 30;
	
	int total = 0;
	int totalRestante = 20;
	
	int voltar;
	
	int luta;
	
	int orc_Hp;
	int orc_armadura;
	int orc_Velocidade;
	
void atribueValues(int _vida, int _defesa, int _forca, float _velocidade) {
	total = _vida + _defesa + _forca + _velocidade;
	
	if(total <= totalRestante){
		velocidadeBasica = velocidadeBasica + (_velocidade * 0.25);
		
		vidaBasica = vidaBasica + (_vida * 4 );
		defesaBasica = defesaBasica + (_defesa * 2);
		forcaBasica = forcaBasica + (_forca * 3);
		totalRestante = totalRestante - total;
	}
	else{
		printf("\n\n\n\nValor superior ao valor total restante de atributo\n");
	}
	
}

int dadoAleatorio(){
    srand(time(NULL));
    return numero_sortido1=(rand() % 10);
}


int main(){	
	
	printf("                                    Seja bem vindo a Tombs of Darkness\n");
	printf("                             DSD e um jogo de RPG Testo. Boa sorte Aventureiro!!!\n");
	
	printf("\n\n\n\n\n\n\n\n\n  Escolha o nome do seu Personagem : ");
	scanf("%s" , &nome);
	
	printf("\n\n\n\nPrezado %s voce e um guerreiro! Agora devera escolher seus Atributos iniciais!\n" , nome);
	
	printf("        Voce tem 20 pontos de Atributos. Escolha sabiamente entre força , defesa , vida , velocidade de atk\n");
	
	do{
		
		printf("\n\nForça: ");
		scanf("%d" , &forca);
		printf("Defesa: ");
		scanf("%d" , &defesa);
		printf("vida: ");
		scanf("%d" , &vida);
		printf("Velocidade de Atk: ");
		scanf("%f" , &velocidade);
		
		atribueValues(vida, defesa, forca, velocidade);
		
		
		printf("\nPontos Restantes:   %d\n\n\n", totalRestante);		
		
	}while(totalRestante > 0);
	
		printf("  Status : %s\n" , nome);
		printf("\n   forca:              %d", forcaBasica);
		printf("\n   defesa:             %d", defesaBasica);
		printf("\n   vida:               %d", vidaBasica);
		printf("\n   velocidade:         %f\n\n\n\n\n\n", velocidadeBasica);
		
		// Inicio da Historia
		
		
		printf("A rumores ao redor de Thiryvillage sobre o lider dos orcs (DOOM) esta dominando as tumbas dos grandes Deuses Das Trevas.\n So existe apenas um humano capaz de salvar o reino!\n O guerreiro de Asvyr %s!\n" , nome);
		
		printf("%s esta na primeira tumba! Na entrada ha um Acampamento o cheiro do acampamento percebe de longe! Com certeza ha orcs.\n O clima de morte esta no ar, uma neblina escura e densa!!\n" , nome);
		
		printf("Ha um orc de vigia na entrada! Voce decide quer enfrentalo ou tentar passar despercebido!!!\n");
		
		luta:
		
		printf("Digite 1 - para Lutar ou 2 - para passar!!!\n\n\n");
		
		scanf("%d" , &luta);
		
		if(luta == 1){
			printf("Hora de lutar!!!\n\n");
			
		}
		else if(luta == 2){
			dadoAleatorio();
			if(numero_sortido1){
			
				if(numero_sortido1<=2){
					printf("Você passou sem ser visto\n\n\n");
				}
				else if(numero_sortido1<=6){
					printf("Ops foi por pouco mas o orc te viu!!!\n\n\n");
				}
				else{
					printf("Hora de lutar!!! O orc te viu!!!\n\n\n");
				}
			}
		}
		else{
			printf("Opçao Invalida!!!\n\n");
			goto luta;
		}
		
	
}      
