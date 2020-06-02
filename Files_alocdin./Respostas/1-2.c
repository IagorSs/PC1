#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que: i) solicite ao usuário um valor n; ii) crie, dinamicamente, um vetor de n
elementos; e iii) passe esse vetor para uma função que preencherá o vetor. Depois, no
programa principal, o vetor preenchido deverá ser impresso. Antes de finalizar o programa,
libere a área de memória alocada. 
Ajuste para exibir os n elementos do vetor dentro da função que preenche o vetor.
Após exibir o vetor, pergunte ao usuário quantos elementos a mais ele deseja adicionar ao vetor (feito nesse programa podendo aumentar ou diminuir o tamanho do vetor mas sempre mantendo os numeros já colocados). Em
seguida, use a função realloc para aumentar o tamanho do vetor. Preencha as novas posições do
vetor com números aleatórios. Exiba o vetor novamente. No programa principal, exiba todos os
elementos do vetor.
*/

void preencher(int *p,int n);
void exibir(int *p,int n);

void main(){
	int n,*p;
	srand(time(0));
	printf("Número de n: ");scanf("%i",&n);
	p=malloc(n*sizeof(int));
	preencher(p,n);
	free(p);
}

void preencher(int *p,int n){
	int i,n1=-1;
	char c;
	do{
		if(n1==-1)
			for(i=0;i<n;i++)
				*(p+i)=rand()%20+1;
		else{
			if(n1>n)
				for(i=n;i<n1;i++)
					*(p+i)=rand()%20+1;
			n=n1;
		}n1=n;
		exibir(p,n);
		printf("Tamanho do vetor é %i. Deseja alterar?\n(s)sim\n(n)não\n",n1);
		scanf(" %c",&c);
		if(c=='s'){
			printf("Qual o novo tamanho? ");
			scanf("%i",&n1);
			p=realloc(p,n1*sizeof(int));
		}
	}while(c=='s');
	exibir(p,n);
}

void exibir(int *p,int n){
	int i;
	for(i=0;i<n;i++)
		printf("%i ",p[i]);
	printf("\n");
}
