/* Implemente um programa que preenche com valores aleatórios uma matriz MxN e:
1. armazena em um vetor v1 o maior elemento cadastrado em cada coluna da matriz;
2. armazena em um vetor v2 o menor elemento cadastrado em cada coluna da matriz;
Ao final, o programa deve exibir: a matriz original, o vetor dos maiores elementos e o vetor dos
menores elementos.
Obs.:
­ Os valores de M e N devem ser definidos por meio da diretiva “#define”
­ Você pode utilizar no máximo dois comandos “for” para encontrar os menores e maiores
elementos das colunas.
A solução deve ser implementada no programa principal (“main”), sem utilizar funções. */

#include <stdio.h>
#include <stdlib.h>
#define M 5 //linha
#define N 6 //coluna
#include <time.h>

void main(){
	int m[M][N],v1[N],v2[N];
	int i,j,i1;
	int ng;
	srand(time(0));
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			m[i][j]=rand()%90+10;
	for(j=0,i1=0;j<N;j++,i1++){
		for(i=0;i<M;i++)
			if(i==0||m[i][j]>ng)
				ng=m[i][j];
		v1[i1]=ng;
	}
	for(j=0,i1=0;j<N;j++,i1++){
		for(i=0;i<M;i++)
			if(i==0||m[i][j]<ng)
				ng=m[i][j];
		v2[i1]=ng;
	}
	for(i=0;i<M;i++){
		for(j=0;j<N;j++)
			printf("%i ",m[i][j]);
		printf("\n");
	}printf("Maiores elementos: ");
	for(i=0;i<N;i++)
		printf("%i ",v1[i]);
	printf("\nMenos elementos: ");
	for(i=0;i<N;i++)
		printf("%i ",v2[i]);
	printf("\n");
}
