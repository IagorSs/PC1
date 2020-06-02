/* Escreva um programa que armazena 15 números inteiros aleatórios em um vetor. O vetor
deverá ser uma variável local dentro da função “main”. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define tam 15
#include "2-6.h"
#include "7-9.h"
#include "10.h"
#include "11.h"

void main(){
	float v[tam],v2[tam+1];
	int i=0,n;
	srand(time(0));
	while(i<tam){
		printf("%i)",i);
		v[i]=rand()%2;
		printf("%f\n",v[i]);
		i++;
	}i=0;
	while(i<tam+1){
		printf("%i)",i);
		v2[i]=rand()%2;
		printf("%f\n",v[i]);
		i++;
	}printf("%i",compara(v,tam,v2,tam+1));
}
