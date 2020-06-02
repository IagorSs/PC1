/* 13) Implemente um programa que grave um vetor de 100 números inteiros em dois arquivos,
um no formato texto e o outro binário. Use ftell para descobrir o tamanho dos dois arquivos
e explique a diferença observada. Faça os seguintes testes:
1. insira no vetor apenas números inteiros entre 0 e 9.
2. insira no vetor apenas números inteiros entre 1000 e 9999.
3. insira no vetor apenas números inteiros entre 10000 e 99999. */

#include <stdio.h>
#include <stdlib.h>

void main(){
	int v[100];
	FILE *a;
	srand(time(0));
	for(int i=0;i<100;i++)
		v[i]=rand()%90000+10000;
	a=fopen("13.txt","w");
	fwrite(v,sizeof(int),100,a);
	fseek(a,0,SEEK_END);
	printf("Tamanho arquivo texto: %li\n",ftell(a));
	fclose(a);
	a=fopen("13.bin","wb");
	fwrite(v,sizeof(int),100,a);
	fseek(a,0,SEEK_END);
	printf("Tamanho arquivo binário: %li\n",ftell(a));
	fclose(a);
}
