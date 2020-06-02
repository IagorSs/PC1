/* 2) Implemente um programa que abra o arquivo texto criado no exercício anterior e
conte quantas vezes a letra “a” aparece no nome. */

#include <stdio.h>
#include <stdlib.h>

void main(){
	FILE *a;
	a=fopen("saida.txt","r");	
	char c;
	int cont=0;
	c=fgetc(a);
	while(c!=EOF){
		if(c=='a')
			cont++;
		c=fgetc(a);
	}printf("'a' aparece %i vezes\n",cont);
	fclose(a);
}
