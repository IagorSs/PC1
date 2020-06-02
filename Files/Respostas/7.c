/* 7) Implemente um programa que compara o tamanho de 2 arquivos e informa qual possui a
maior quantidade de bytes. */

#include <stdio.h>
#include <stdlib.h>
int tamanho_bytes(FILE *a);

void main(){
	FILE *a,*b;	
	char c,*arq,*arq2;
	arq=malloc(40*sizeof(char));
	printf("Digite o nome do 1º arquivo\n");
	gets(arq);
	a=fopen(arq,"rb");
	arq2=malloc(40*sizeof(char));
	printf("Agora o nome do 2º arquivo\n");
	gets(arq2);
	b=fopen(arq2,"rb");
	if(tamanho_bytes(a)>tamanho_bytes(b))
		printf("%s tem mais bytes\n",arq);
	else
		printf("%s tem mais bytes\n",arq2);
	free(arq);
	free(arq2);
	fclose(a);
	fclose(b);
}

int tamanho_bytes(FILE *a){
	int c;
	int cont=0;
	c=fgetc(a);
	while(c!=EOF){
		c=fgetc(a);
		cont++;
	}return cont;
}
