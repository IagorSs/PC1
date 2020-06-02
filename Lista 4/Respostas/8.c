/* Implemente um programa para calculcar a soma dos N primeiros números primos, sendo N definido
pelo usuário na função principal “main()”. O programa deverá ter as funções “Soma_Primos” e
“Primo”, sendo que a primeira será responsável pela soma dos números que forem primos e a
segunda será responsável por verificar se o número em questão é primo ou não (mesma função que
foi implementada no exercício anterior). */
#include <stdio.h>
#include "função 7.h"

int soma_primos(int n){
	int c=1,b=1,s=0;
	while(c<=n){
		if(primo(b)==1){
			s=s+b;
			c++;
			b++;
		}else
			b++;
	}return s;
}
void main(){
	int n;
	printf("Digite quantos números primos deverão ser somados: ");scanf("%i",&n);
	printf("Soma dos primeiros %i números primos: %i\n",n,soma_primos(n));
}
