#include<stdio.h>

/* Implemente um programa que solicita ao usuário 10 valores inteiros. Apresente o maior
valor lido e a posição dentre os 10 valores lidos. */

void main(){
	int a,b,c=0,p;
	do{
		c++;
		printf("Digite o %iº número: ",c);scanf("%i",&a);
		if(a>b||c==1){//se numero for maior q algum dos anteriores
			b=a;
			p=c;
		}
	}while(c<10);
	printf("O maior número é o %i que foi digita na %iª posição\n",b,p);

}
