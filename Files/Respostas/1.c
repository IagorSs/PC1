/* 1) Implemente um programa que grave um string (seu nome, por exemplo) em um arquivo
texto. */

#include <stdio.h>
#include <stdlib.h>

void main(){
	char nome[40];
	printf("Digite seu nome\n");
	gets(nome);
	FILE *a;
	a=fopen("saida.txt","w");
	for(int i=0;nome[i]!='\0';i++)
		fprintf(a,"%c",nome[i]);
	fclose(a);
}
