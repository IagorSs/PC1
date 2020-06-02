/* Implemente uma função que retorna o valor do seguinte somatório:
n

i!
i=3
O valor de “n” será passado como parâmetro para função. Utilize a função fatorial implementada no
exercício anterior. */
#include "função 9.h"

int somatorio(int n){
	int i=3,s=0,f;
	while(i<=n){
		f=fatorial(i);
		s=s+f;
		i++;
	}return s;
}

