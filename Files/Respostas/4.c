/* 4) Implemente um programa que abra o arquivo binário criado no exercício anterior e
conte quantas vezes a letra “a” aparece no nome. */

#include <stdio.h>
#include <stdlib.h>

void main(){
	FILE *a;
	a=fopen("saida.bin","rb");	
	char c;
	int cont=0;
	c=fgetc(a);
	while(c!=EOF){
		if(c=='a')
			cont++;
		c=fgetc(a);
	}printf("'a' aparece %i vezes nesse arquivo\n",cont);
	fclose(a);
}
