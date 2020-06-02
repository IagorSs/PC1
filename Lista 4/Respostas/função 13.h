/* Implemente uma função que retorna o valor do seguinte somatório:
n
 i!/i^i
i=3
O valor de “n” será passado como parâmetro para função. Utilize as funções que calculam fatorial e
potência, implementadas nos exercícios anteriores. */
#include "função 9.h"
#include "função 11.h"

int somatorio(int n){
	int s=0,i=3;
	while (i<=n){
		s=s+(fatorial(i)/potencia(i,i));//incluir o tipo de somatório em questão aqui
		i++;
	}return s;
}
