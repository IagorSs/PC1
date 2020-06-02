#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/* Cada novo termo da sequência de Fibonacci é gerado pela adição dos 2 termos anteriores. Ao iniciar a sequência com 1 e 2, os dez primeiros termos são: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ... Faça um programa que encontre a soma dos números pares da sequência de Fibonacci cujo termo não exceda 4 milhões.
Resposta: 4613732 */

int main(){
	int a=1,b=2,c=3,d,s=0;
	while(a<=4000000){
		if(a%2==0)
			s=s+a;
		a=b+c;
		b=c+a;
		c=a+b;
	}a=1;
	b=2;
	c=3;
	while(b<=4000000){
		if(b%2==0)
			s=s+b;
		a=b+c;
		b=c+a;
		c=a+b;
	}a=1;
	b=2;
	c=3;
	while(c<=4000000){
		if(c%2==0)
			s=s+c;
		a=b+c;
		b=c+a;
		c=a+b;
	}printf("Soma dos números pares da sequência de Fibonacci\n%i\n",s);
}
