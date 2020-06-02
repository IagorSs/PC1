#include<stdio.h>
/* Faça um programa que solicita ao usuário um valor A e um valor N. Imprimir a soma dos N
números a partir de A(inclusive). Enquanto N for negativo ou ZERO, um novo N(apenas N)
deve ser lido. */
void main(){
	int A,N,s;
	printf("Valor de A: ");scanf("%i",&A);
	do{
		printf("Valor de N: ");scanf("%i",&N);
	}while(N<=0);
	N++;
	for(s=0;N!=0;N--){
		s=s+A;
		A++;
	}printf("Valor da Soma de A com os N números seguintes: %i\n",s);
}
