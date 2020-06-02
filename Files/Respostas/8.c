/* 8) Implemente um programa que conta quantas vezes uma certa palavra aparece em um
arquivo texto. */

#include <stdio.h>
#include <stdlib.h>
int tamanho_file(FILE *a);
void main(){
	FILE *a;
	char arq[40],palavra[12];
	//printf("Qual arquivo deverá ser usado?\n");
	gets(arq);
	a=fopen(arq,"rb");
	//printf("Qual palavra deverá ser conferida?\n");
	gets(palavra);
	char ch,*aux;
	int i,i1,iaux,cont=0,tam;
	tam=tamanho_file(a);
	fclose(a);
	a=fopen(arq,"rb");
	printf("%i\n",tam);
	aux=malloc((tam+1)*sizeof(char));
	ch=fgetc(a);
	for(i=0;ch!=EOF;i++){
		aux[i]=ch;
		ch=fgetc(a);
	}aux[i]='\0';
	for(i=0;aux[i]!='\0';i++){
		i1=0;
		iaux=i;
		while(aux[i]==palavra[i1]){
			i++;
			i1++;
			if(palavra[i1]=='\0')
				cont++;
		}
		i=iaux;
	}printf("A palavra %s aparece %i vezes\n",palavra,cont);
	free(aux);
	fclose(a);
}

int tamanho_file(FILE *a){
	int cont=0,ch;
	ch=fgetc(a);
	while(ch!=EOF){
		cont++;
		ch=fgetc(a);
	}return cont;
}
