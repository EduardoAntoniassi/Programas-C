// Inser��o das bibliotecas b�sicas para fun��es como printf, scanf entre outras opera��es;
#include <stdio.h>
#include <stdlib.h>

// Inser��o da biblioteca stdbool.h para usar as fun��es booleanas;
#include <stdbool.h>

// Inser��o da biblioteca locale.h para deixar a fun��o no padr�o Portugu�s Brasileiro;
#include <locale.h>

// Fun��o de Verifica��o de Palvra-Chave, puxando todas as v�riaveis necess�rias na oper��o;
	bool verificacao(int estinicial, int estfinal[], int qtdestfinal, int qtdsimbol, char simbol[], int transicao[][10], char palavra[]) {
		// Atualiza��o do estado atual como primeiro estado a ser testado;
    	int estatual = estinicial;

    	// For para procurar os caracteres da palavra em simbol, contanto que seja diferente de \0;
    	for (int i = 0; palavra[i] != '\0'; i++) {

			// Imposi��o de indicesimbol como -1 para verifica��o de erros;
        	int indicesimbol = -1;
        	
        	// For e if para verifica��o da palavra em determinado simbol para atualiza��o do �ndice;
        	for (int j = 0; j < qtdsimbol; j++) {

            	if (palavra[i] == simbol[j]) {
                	indicesimbol = j;
                	
                	// Break para pausar a opera��o caso seja funcional
                	break;

            	}
        	}
        	
        	// If para invalidar um s�mbolo caso ele seja igual a -1;
        	if (indicesimbol == -1) {	
            	return false;

        	}
        	
        	// Atualiza o estado atual conforme as transi��es s�o executadas
        	estatual = transicao[estatual - 1][indicesimbol];
        	
    	}
    	
        // For e if feito para ver os estados finais, e fazer a compara��o entre estado atual e final;
    	for (int i = 0; i < qtdestfinal; i++) {
        	if (estatual == estfinal[i]) {
        		// Caso o estatual seja igual a atual posi��o do estfinal retorna true;
            	return true;
            
        	}
    	}	

		// Caso n�o, retorna false;
		return false;
	}	
 
// Inicia a fun��o Main;
int main() {
	
	// Configura o locale como Portuguese e deixa no padr�o Brasileiro;
	setlocale(LC_ALL, "Portuguese");
	
	//Inser��o das vari�veis necess�rias;
    int estinicial, qtdest, qtdestfinal, qtdsimbol;
    char simbol[10];
    int estfinal[100], transicao[100][10];

	//Inser��o do Cabe�alho;
    printf("\n*************** AFD - AUT�MATO FINITO DETERMIN�STICO ***************\n");
    printf("\nAluno: Eduardo Louren�o Antoniassi\n");
    printf("Disciplina: Linguagens Formais, Aut�matos e Computabilidade\n");
    printf("\n********************************************************************\n");

    
    // Scan dos dados necess�rios para o AFD;
    printf("Digite o estado inicial: \n");
    scanf("%d", &estinicial);

    printf("Digite a quantidade de estados: \n");
    scanf("%d", &qtdest);

    printf("Digite a quantidade de estados finais: \n");
    scanf("%d", &qtdestfinal);

	// For para armazenar os estados finais;
    for (int i = 0; i < qtdestfinal; i++) {
        printf("Insira o %d estado final:\n" ,i + 1);
        scanf("%d", &estfinal[i]); 

    }

    printf("Digite a quantidade de s�mbolos no alfabeto: \n");
    scanf("%d", &qtdsimbol);

	// For para armazenar os s�mbolos;
    for (int i = 0; i < qtdsimbol; i++) {
        printf("Insira o %d� s�mbolo:\n" ,i + 1);
        scanf(" %c", &simbol[i]); 

    }

	// Inser��o da Tabela de Transi��o em design de tabela;
    printf("\n========TABELA DE TRANSI��O:========\n");
    for (int i = 0; i < qtdsimbol; i++) {
        printf("%3c %c ",' ' ,simbol[i]);

    }
    printf("\n");
    for (int i = 0; i < qtdest; i++) {
        printf("Q%d ", i + 1);

        for (int j = 0; j < qtdsimbol; j++) {
            printf("%2d,%d ",i + 1 ,j + 1);

        }
        printf("\n");
    }

    // Preenche a tabela de transicao de acordo com o usu�rio;
    printf("\nPreencha a tabela de transi��o:\n"); 
    for (int i = 0; i < qtdest; i++) {
        for (int j = 0; j < qtdsimbol; j++) {
            printf("%d,%d: ", i + 1, j + 1);
            scanf("%d", &transicao[i][j]); 
            
        }
    }

    // Declara e recebe a vari�vel palavra;
    char palavra[100];
    printf("\nDigite a palavra a ser verificada: ");
    scanf("%s", palavra);

    // Puxa a fun��o booleana que verifica a condi��o da palavra, caso true aceita, caso false n�o aceita;
    if (verificacao(estinicial, estfinal, qtdestfinal, qtdsimbol, simbol, transicao, palavra) == true) {
        printf("Palavra aceita!\n");
        
    } else {
        printf("Palavra n�o aceita!\n");
        
    }

    return 0;
}// Encerra a fun��o, sem retorno;
