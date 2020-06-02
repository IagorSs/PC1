/* 3) Implemente um programa que grave um string (seu nome, por exemplo) em um arquivo
binário. */

#include <stdio.h>
#include <stdlib.h>

void main(){
	FILE *a;
	a=fopen("saida.bin","wb");	
	char c,nome[40];
	int tam;
	printf("Digite a string\n");
	fgets(nome,40,stdin);
	for(tam=0;nome[tam]!='\0';tam++);
	fwrite(nome,sizeof(char),tam,a);
	fclose(a);
}
