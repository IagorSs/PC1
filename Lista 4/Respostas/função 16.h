/* Implemente uma função que recebe um número inteiro “num” como parâmetro e
retorna o primeiro número primo maior do que “num”. Exemplo: ao receber 8, a função
retornará 11; ao receber 17, a função retornará 19. Você deve implementar uma função
específica que retorna 1 se o número for primo e 0, caso contrário. */
#include"função 7.h"

int primeiro_primo_seguinte(int num){
	do{
		num++;
	}while(primo(num)==0);
	return num;
}
