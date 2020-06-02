/* 5) Implemente um programa que solicite um nome de arquivo ao usuário e conte a quantidade
de bytes do arquivo informado. Teste seu programa com os arquivos criados nos exercícios
anteriores. */

#include <stdio.h>
#include <stdlib.h>

void main(){
	FILE *a;	
	char c,arq[40];
	int cont=0;
	printf("Digite o nome do arquivo\n");
	gets(arq);
	a=fopen(arq,"rb");
	c=fgetc(a);
	while(c!=EOF){
		cont++;
		c=fgetc(a);
	}printf("%i bytes\n",cont);
	fclose(a);
}
