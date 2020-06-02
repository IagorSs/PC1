#include<stdio.h>
/* Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos
valores for menor ou igual a zero). Para cada par lido, mostre a sequência do menor até o
maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).
Exemplos:
5 2 ­> 2 3 4 5 Soma=14
6 3 ­> 3 4 5 6 Soma=18
5 0 ­> Terminar o programa */
void main(){
	int s=0,M,N;
	printf("Digite um par de valores ");scanf("%i %i",&M,&N);
	while(M>0&&N>0){
		while(M>0&&N>0){
			for(M;M>N;N++){
				printf("%i ",N);
				s=s+N;
			}for(N;M<N;M++){
				printf("%i ",M);
				s=s+M;
			}if(M==N){
				printf("%i ",M);
				s=s+M;
				break;
			}
		}printf("Soma =%i\n",s);
		s=0;
		printf("Digite um par de valores ");scanf("%i %i",&M,&N);
	}printf("Programa terminado\n");
}
