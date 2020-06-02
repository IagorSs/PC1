/* Implemente o programa principal (main) e a função float VAL (float x, int n, float t) que recebe
como parâmetro um valor x, uma taxa t e a quantidade de anos n. A função deve retornar o Valor
Líquido Atual (VAL) calculado da seguinte maneira:
O programa principal deve chamar a função VAL passando parâmetros de teste (ou seja, valores
para x, n e t) e, em seguida, exibir o resultado. A função VAL deve chama a função que calcula
potência, implementada no exercício anterior. */
#include <stdio.h>
#include "função 11.h"

float VAL(float x,int n, float t){
	float a,e=1,v=0;
	a= 1+t;
	while(e<=n){
		v=v+(x/potencia(a,e));
		e++;
	}return v;
}

int main(){
	int x,n,t;
	printf("Valor: ");scanf("%i",&x);
	printf("Anos: ");scanf("%i",&n);
	printf("Taxa: ");scanf("%i",&t);
	printf("%i\n",Val(x,n,t));
}

