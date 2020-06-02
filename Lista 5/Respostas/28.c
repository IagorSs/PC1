/* Uma empresa tem registrado em uma tabela os consumos mensais de energia elétrica dos
anos de 2003 até 2010. Cada linha representa um ano e cada coluna representa um mês.
Considerando esses dados, faça um algoritmo para processar a tabela e produzir as seguintes
informações:
1. Consumo médio em cada um dos meses;
2. Mês/ano em que houve o maior gasto com energia. */

#include <stdio.h>
#include <stdlib.h>
#define linha 8
#define coluna 12
#include <time.h>

void exibir_matriz_tabela();
void maior_gasto();
 
void main(){
	srand(time(0));
	int i,j;
	int m[linha][coluna];
	for(i=0;i<linha;i++)
		for(j=0;j<coluna;j++)
			m[i][j]=rand()%500;
	exibir_matriz_tabela(m);
	maior_gasto(m);
}

void exibir_matriz_tabela(int m[][coluna]){
	int i,j;
	int a=2003,me=1;
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++)
			printf("%i ",m[i][j]);
		printf("\n");
	}
}

void maior_gasto(int m[][coluna]){
	int i,j;
	int ig,jg;
	int maior_gasto;
	for(i=0;i<linha;i++)
		for(j=0;j<coluna;j++)
			if(i==0&&j==0||m[i][j]>maior_gasto){
				ig=i;
				jg=j;
				maior_gasto=m[i][j];
			}
	printf("Mês/ano com maior gasto de energia:%i/%i\n",ig+2003,jg+1);
}

