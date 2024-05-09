//Inclus�o das Bibliotecas b�sicas da linguagem C
#include <stdio.h>
#include <stdlib.h>

//Inclus�o da biblioteca time.h para utilizar as ferramentas de benchmark 
#include <time.h>

//Inclus�o da biblioteca locale.h para deixar o c�digo e medi��es no padr�o da l�ngua portugues
#include <locale.h>

//Definindo o n�mero das itera��es e o tamanho do arquivo em bytes
#define NUM_ITERACOES 10000
#define TAMANHO_ARQUIVO 1000

// Fun��o para realizar a tarefa de benchmark
void benchmark() {
	
	//Define a Locale para Portugu�s, padronizando ao nosso idioma
	setlocale(LC_ALL, "Portuguese");
	
	//Inser��o de Printf para deixar a interface mais explicativa, e com um design mais confort�vel ao usu�rio
	printf("-----------------------------------------------------------------------------\n");
	printf("\n");
	printf("     Iniciando o teste de Benchmark de desempenho geral do sistema       \n");
	printf("    Nosso teste � voltado para efici�ncia da manipula��o de arquivos       \n");
	printf("\n");
	printf("Esta opera��o pode demorar alguns segundos, por favor aguarde...\n");
	printf("\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("\n");
	printf("Para melhor execu��o do teste\n -Feche todos os aplicativos\n -Execute apenas o aplicativo do teste\n\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("\n");
	
	
	//Inicia a fun��o clock para contagem do tempo de execu��o do Benchmark
    clock_t inicio, fim;
    
    //Inser��o da v�riavel que armazena o tempo total a ser executado
    double tempo_total;

    // Medir o tempo de execu��o da tarefa
    inicio = clock();

	//Inicia a execu��o do teste de Benchmark, de acordo com o n�mero de itera��es definidas previamente
    for (int i = 0; i < NUM_ITERACOES; i++) {
    	
        // Cria o arquivo
        FILE *arquivo = fopen("temp.txt", "w");
        
        //if para alerta de erro, caso a opera��o falhe
        if (arquivo == NULL) {
        	
            fprintf(stderr, "Erro ao criar o arquivo\n");
            exit(1);
            
        }
        
        // Escrever a palavra "Teste" no arquivo criado
        fputs("Teste", arquivo);
        
        // Fecha o arquivo
        fclose(arquivo);
        
        //Abre e faz a leitura do arquivo, al�m da cria��o da char buffer para armazenar temporariamente os dados lidos
        char buffer[TAMANHO_ARQUIVO];
        arquivo = fopen("temp.txt", "r");
        
        //novamente if para alertar falha da opera��o
        if (arquivo == NULL) {
        	
            fprintf(stderr, "Erro ao abrir o arquivo\n");
            exit(1);
            
        }
        
        //fun��o fgets para ler armazenar o valor do arquivo e fclose para fechar o arquivo
        fgets(buffer, TAMANHO_ARQUIVO, arquivo);
        fclose(arquivo);

        //Remove o arquivo anteriormente criado
        remove("temp.txt");
        
    }

	//fun��o para fechar o clock e parar de contar o tempo de execu��o do teste
    fim = clock();
    
    //vari�vel para armazenar o tempo total contado pelo clock
    tempo_total = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("Tempo total: %.6f segundos\n", tempo_total);
	
    //Calcula a nota baseada no tempo
    //Inser��o da v�riavel que calcula a m�dia de tempo para avaliar em nota
    double tempo_medio = tempo_total / NUM_ITERACOES;
    
    //Classifica a nota de acordo com o tempo m�dio em uma escala de 100.0 para ser avaliada de 0 - 10
    int nota = (int)(10.0 - (tempo_medio * 100.0));
    
    //If para deixar o valor da nota como 0, j� que o n�mero m�nimo de nota � 0
    if (nota < 0) {
    	
        nota = 0;
        
    }
    
	//Inser��o da nota da m�quina julgada acima
    printf("Sua m�quina � nota %d\n", nota);
    printf("\n");
    printf("-----------------------------------------------------------------------------\n");
    
    //Finaliza��o da Fun��o de Teste do Benchmark
}

//Fun��o principal de execu��o, feita para puxar a fun��o que executa o Benchmark
int main() {
	
    benchmark();
    system("pause");
    return 0;
    
    //Finaliza��o da fun��o principal
}
