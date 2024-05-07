#ifndef CALC_H_INCLUDED
#define CALC_H_INCLUDED

	//Aluno: Eduardo Lourenço Antoniassi;
typedef struct{
	int resultado;
	
}Calculadora;

	//funçoes da calculadora
	Calculadora *criarCalculadora();
	void destruirCalculadora(Calculadora* calc);
	void somar(Calculadora* calc, int valor);
	void subtrair(Calculadora* calc, int valor);
	void multiplicar(Calculadora* calc, int valor);
	void expoente(Calculadora* calc, int valor);
	//void cubo(Calculadora* calc, int valor){
	void imprimirResultado(const Calculadora* calc);

#endif /* CALCULADORA_H */

