#include <stdio.h>
/* Qual o menor número inteiro entre 1 e 10000 que possui a maior quantidade de divisores?
Quantos e quais são os divisores? Implemente um programa para encontrar a resposta.
Resposta: menor número 7560 com 64 divisores. Exiba os divisores. */

void main(){
	int dg,ag,a,c,d;
	dg=ag=0;
	a=c=d=1;
	while(a<=10000){
		if(a%d==0&&a!=1){
			c++;
			d++;
		}else if(a!=1)
			d++;
		if(d>(a-1)){
			if(a==1){
				ag=a;
				dg=c;
			}if(c>dg){
				ag=a;
				dg=c;
			}
			a++;
			d=c=1;
		}
	}
	printf("Menor número com maior quantidade de divisores entre 1 e 10.000: %i\n",ag);
	printf("Quantidade de divisores: %i\n",dg);
}
