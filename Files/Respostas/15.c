/* 15) Implemente um programa que grave o nome completo de 5 pessoas em um arquivo binário.
Implemente um procedimento para exibir todos os nomes gravados no arquivo. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exibir(FILE *a);

void main(){
	char nome[40],ch;
	int i,tam;
	FILE *a;
	a=fopen("15.bin","w+b");
	for(i=0;i<5;i++){
		printf("Digite o nome da %iª pessoa\n",(i+1));
		fgets(nome,40,stdin);
		for(tam=0;nome[tam]!='\0';tam++);
		fwrite(nome,sizeof(char),tam,a);
	}exibir(a);
	fclose(a);
}

void exibir(FILE *a){
	int i;
	char nome[40];
	rewind(a);
	for(i=0;i<5;i++){
		fgets(nome,40,a); // vai até o '\n'
		//fscanf(a,"%s",nome); //vai somente até o espaço
		printf("%s",nome);
	}
}
