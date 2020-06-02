/* 14) Escreva um programa que grave um vetor de 20 números inteiros em um arquivo binário.
Implemente uma função para mostrar todo o conteúdo do arquivo. Implemente um
procedimento que elimina todos os números repetidos existentes no arquivo, sem utilizar
vetores. Insira um novo número no lugar do número repetido. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exibir(FILE *a);
void tirar_repet(FILE *a);
int repeticao(FILE *a);

void main(){
	int v[20],i;
	FILE *a;
	a=fopen("14.bin","w+b");
	srand(time(0));
	for(i=0;i<20;i++){
		v[i]=rand()%30+1;
	}fwrite(v,sizeof(int),20,a);
	exibir(a);
	while(repeticao(a)==1)
		tirar_repet(a);
	exibir(a);
	fclose(a);
}

void exibir(FILE *a){
	int i=0,ch;
	rewind(a);
	fread(&ch,sizeof(int),1,a);
	while(i<20){
		printf("%i ",ch);
		fread(&ch,sizeof(int),1,a);
		i++;
	}printf("\n");
}

int repeticao(FILE *a){// 1 se houver repetição, 0 senão
	int v[20],i,i1,n;
	rewind(a);
	n=fread(v,sizeof(int),20,a);
	if(n!=20)
		printf("Não foi possível ler 20 números\n");
	else
		for(i=0;i<20;i++)
			for(i1=0;i1<20;i1++){
				if(i1==i)
					i1++;
				if(i1==20)
					continue;
				else if(v[i]==v[i1])
					return 1;
			}
	return 0;
}

void tirar_repet(FILE *a){
	int i,i1,a1,a2;
	rewind(a);
	for(i=0;i<(20*sizeof(int));i=i+sizeof(int)){
		fseek(a,i,SEEK_SET);
		fread(&a1,sizeof(int),1,a);
		for(i1=0;i1<(20*sizeof(int));i1=i1+sizeof(int)){
			if(i1==i)
				i1=i1+sizeof(int);
			if(i1==(20*sizeof(int)))
				break;
			fseek(a,i1,SEEK_SET);
			fread(&a2,sizeof(int),1,a);
			if(a1==a2){
				a2 = rand()%30+1;
				fseek(a,-4,SEEK_CUR);
				fwrite(&a2,sizeof(int),1,a);
			}
		}
	}	
}
