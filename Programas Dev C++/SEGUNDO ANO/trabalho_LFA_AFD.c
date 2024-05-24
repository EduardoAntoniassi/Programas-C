// Inserção das bibliotecas básicas para funções como printf, scanf entre outras operações;
#include <stdio.h>
#include <stdlib.h>

// Inserção da biblioteca stdbool.h para usar as funções booleanas;
#include <stdbool.h>

// Inserção da biblioteca locale.h para deixar a função no padrão Português Brasileiro;
#include <locale.h>

// Função de Verificação de Palvra-Chave, puxando todas as váriaveis necessárias na operção;
	bool verificacao(int estinicial, int estfinal[], int qtdestfinal, int qtdsimbol, char simbol[], int transicao[][10], char palavra[]) {
		// Atualização do estado atual como primeiro estado a ser testado;
    	int estatual = estinicial;

    	// For para procurar os caracteres da palavra em simbol, contanto que seja diferente de \0;
    	for (int i = 0; palavra[i] != '\0'; i++) {

			// Imposição de indicesimbol como -1 para verificação de erros;
        	int indicesimbol = -1;
        	
        	// For e if para verificação da palavra em determinado simbol para atualização do índice;
        	for (int j = 0; j < qtdsimbol; j++) {

            	if (palavra[i] == simbol[j]) {
                	indicesimbol = j;
                	
                	// Break para pausar a operação caso seja funcional
                	break;

            	}
        	}
        	
        	// If para invalidar um símbolo caso ele seja igual a -1;
        	if (indicesimbol == -1) {	
            	return false;

        	}
        	
        	// Atualiza o estado atual conforme as transições são executadas
        	estatual = transicao[estatual - 1][indicesimbol];
        	
    	}
    	
        // For e if feito para ver os estados finais, e fazer a comparação entre estado atual e final;
    	for (int i = 0; i < qtdestfinal; i++) {
        	if (estatual == estfinal[i]) {
        		// Caso o estatual seja igual a atual posição do estfinal retorna true;
            	return true;
            
        	}
    	}	

		// Caso não, retorna false;
		return false;
	}	
 
// Inicia a função Main;
int main() {
	
	// Configura o locale como Portuguese e deixa no padrão Brasileiro;
	setlocale(LC_ALL, "Portuguese");
	
	//Inserção das variáveis necessárias;
    int estinicial, qtdest, qtdestfinal, qtdsimbol;
    char simbol[10];
    int estfinal[100], transicao[100][10];

	//Inserção do Cabeçalho;
    printf("\n*************** AFD - AUTÔMATO FINITO DETERMINÍSTICO ***************\n");
    printf("\nAluno: Eduardo Lourenço Antoniassi\n");
    printf("Disciplina: Linguagens Formais, Autômatos e Computabilidade\n");
    printf("\n********************************************************************\n");

    
    // Scan dos dados necessários para o AFD;
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

    printf("Digite a quantidade de símbolos no alfabeto: \n");
    scanf("%d", &qtdsimbol);

	// For para armazenar os símbolos;
    for (int i = 0; i < qtdsimbol; i++) {
        printf("Insira o %dº símbolo:\n" ,i + 1);
        scanf(" %c", &simbol[i]); 

    }

	// Inserção da Tabela de Transição em design de tabela;
    printf("\n========TABELA DE TRANSIÇÃO:========\n");
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

    // Preenche a tabela de transicao de acordo com o usuário;
    printf("\nPreencha a tabela de transição:\n"); 
    for (int i = 0; i < qtdest; i++) {
        for (int j = 0; j < qtdsimbol; j++) {
            printf("%d,%d: ", i + 1, j + 1);
            scanf("%d", &transicao[i][j]); 
            
        }
    }

    // Declara e recebe a variável palavra;
    char palavra[100];
    printf("\nDigite a palavra a ser verificada: ");
    scanf("%s", palavra);

    // Puxa a função booleana que verifica a condição da palavra, caso true aceita, caso false não aceita;
    if (verificacao(estinicial, estfinal, qtdestfinal, qtdsimbol, simbol, transicao, palavra) == true) {
        printf("Palavra aceita!\n");
        
    } else {
        printf("Palavra não aceita!\n");
        
    }

    return 0;
}// Encerra a função, sem retorno;