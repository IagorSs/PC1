/* Escreva um programa que armazena 20 valores aleatórios em uma matriz 4x5. A matriz
deverá ser uma variável local dentro da função “main”. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define li 4
#define co 5
#include "21-27.h"

void main(){
	int m[li][co];
	int i,j;
	srand(time(0));
	for(i=0;i<li;i++)
		for(j=0;j<co;j++)
			m[i][j]=rand()%100;
	for(i=0;i<li;i++){
		for(j=0;j<co;j++)
			printf("%i ",m[i][j]);
		printf("\n");
	}
	printf("%i\n",repeticao(m));
	eliminar_repetidos(m);
	for(i=0;i<li;i++){
		for(j=0;j<co;j++)
			printf("%i ",m[i][j]);
		printf("\n");
	}
}
