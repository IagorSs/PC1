/* Criar um tipo abstrato de dados (struct) que represente uma pessoa, contendo nome, data de
nascimento e CPF. Crie uma variável que é um ponteiro para esta estrutura no programa principal.
Crie a função preencher que receba este ponteiro e preencha os dados da estrutura. Crie a função
exibir que receba o ponteiro para a estrutura e imprima todos os elementos. Chame as duas funções
a partir do programa principal. */

#include <stdio.h>
#include <stdlib.h>
//missão pessoal: tentar transformar no mais reciclável possível, alocando dinamicando qtde de pessoas e usando arquivos para construção
//problema: entrada divide se tem o inteiro 08 ou 09 em algum local
typedef struct pessoa{
	char nome[40];
	int data[3];
	int CPF[4];
}pessoa;

void preencher(pessoa *p,int ii,FILE *a){
	int i;
	//printf("Digite o nome\n");
	fscanf(a,"%s",p[ii].nome);
	//printf("Digite data de nascimento(somente números e dando espaço entre dia-mês-ano)\n");
	for(i=0;i<3;i++)
		fscanf(a,"%i",&p[ii].data[i]);
	//printf("Digite o CPF(dando espaço entre pontos e linha)\n");
	for(i=0;i<4;i++)
		fscanf(a,"%i",&p[ii].CPF[i]);
}

void exibir_saida(pessoa *p,int ii){
	int i;
	FILE *a;
	a=fopen("saida.txt","a");
	fprintf(a,"\n\nNome: %s\n",p[ii].nome);
	fprintf(a,"Data de nascimento: %i/%i/%i\n",p[ii].data[0],p[ii].data[1],p[ii].data[2]);
	fprintf(a,"CPF: %i.%i.%i-%i\n",p[ii].CPF[0],p[ii].CPF[1],p[ii].CPF[2],p[ii].CPF[3]);
	fclose(a);
}

void main(){
	pessoa *p;
	int n,i,aux;
	char c,*a;
	FILE *arq;
	/*printf("Qual o nome do arquivo?\n");
	gets(a);*/
	arq=fopen("entrada.txt","r");
	//printf("Quantas pessoas haverão na agenda? ");
	fscanf(arq,"%i",&n);
	//getchar();
	p=malloc(n*sizeof(pessoa));
	for(i=0;i<n;i++){
		preencher(p,i,arq);
		exibir_saida(p,i);
	}//printf("Você deseja aumentar o número de pessoas da agenda? (s)sim");
	fgetc(arq);
	c=fgetc(arq);
	printf("%c\n",c);
	while(c=='s'){		
		//printf("Quantas pessoas a mais gostaria de adicionar? ");
		fscanf(arq,"%i",&aux);
		//getchar();
		i=n;
		n=n+aux;
		p=realloc(p,n*sizeof(pessoa));
		for(i;i<n;i++){
			preencher(p,i,arq);
			exibir_saida(p,i);
		}//printf("Você deseja aumentar o número de pessoas da agenda? (s)sim");
		fgetc(arq);
		c=fgetc(arq);
		printf("%c\n",c);
	}free(p);
	fclose(arq);
}
