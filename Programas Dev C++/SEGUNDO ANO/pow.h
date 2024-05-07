#ifndef POW_H_INCLUDED
#define POW_H_INCLUDED

	//Aluno: Eduardo Louren�o Antoniassi;
	
typedef struct{
	int resultado;
	
}Expoente;

	//Fun��es de pot�ncia
	Expoente *criarExpoente();
	void destruirExpoente(Expoente* exp);
	void potencia(Expoente* exp, int valor);
	void cubo(Expoente* exp, int valor);
	void imprimirResultado(const Expoente* exp);

#endif /* POW_H_INCLUDED */

