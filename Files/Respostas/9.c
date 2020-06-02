/* 9) Implemente um programa que apaga todas as ocorrências de uma certa palavra em um
arquivo texto. Sugestão: copie o conteúdo do arquivo texto para um arquivo auxiliar, com
exceção da palavra que se deseja excluir. Ao final, apague o arquivo texto original e altere o
nome do auxiliar (use as funções system(“del arquivo.txt”); system(“copy
auxiliar.txt arquivo.txt”); system(“del auxiliar.txt”)). */

#include <stdio.h>
#include <stdlib.h>
int tamanho_file(FILE *a);
void apagar_ocor(char *v,char palavra[]);
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
	apagar_ocor(aux,palavra);
	printf("Nova palavra: %s\n",aux);
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

void apagar_ocor(char *v,char palavra[]){
	int i,i1,iaux;
	for(i=0;v[i]!='\0';i++){
		i1=0;
		iaux=i;
		while(v[i]==palavra[i1]){
			i++;
			i1++;
			if(palavra[i1]=='\0'){
				while(iaux<i){
					v[iaux]='\0';
					iaux++;
				}
				iaux--;
			}
		}i=iaux;
	}for(i=0,i1=0;i<iaux;i++)
		if(v[i]!='\0'){
			v[i1]=v[i];
			i1++;
		}
	v[i1]='\0';
	v=realloc(v,(i1+1)*sizeof(char));
}
