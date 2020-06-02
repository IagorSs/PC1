#include <stdio.h>
#include <stdlib.h>

/* Implemente as seguintes funções:
• Função criar_vetor que recebe um valor n, cria dinamicamente um vetor de n
elementos e retorna um ponteiro do vetor criado.
• Função exibir_vetor que recebe um ponteiro para um vetor e imprime os n elementos
desse vetor.
• Função liberar_vetor que recebe um ponteiro para um vetor e libera esta área de memória.
As funções deverão ser chamadas pelo programa principal. */

int *criar_vetor(int n){
	int i,*p;
	p=malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		*(p+i)=rand()%20+1;
	for(i=0;i<n;i++)// para saber quais os numeros presentes no vetor
		printf("%i ",*(p+i));
	printf("\n");
	return p;
}

void exibir_vetor(int *p){
	int n,i;
	printf("Quantos elementos do vetor serão exibidos? ");
	scanf("%i",&n);
	for(i=0;i<n;i++)
		printf("%i ",*(p+i));
	printf("\n");
}

void liberar_vetor(int *p){
	free(p);
}

void main(){
	int n,tam,*p;
	printf("Número de n: ");scanf("%i",&n);
	p=criar_vetor(n);
	exibir_vetor(p);
	liberar_vetor(p);
}
