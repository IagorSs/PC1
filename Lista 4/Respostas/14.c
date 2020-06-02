/* Qual o menor número inteiro entre 1 e 10000 que possui a maior quantidade de divisores? Quantos e
quais são os divisores? Implemente um programa para encontrar a resposta.
Resposta: menor número 7560 com 64 divisores. Exiba os divisores */

#include <stdio.h>

void main(){
	int a=1,d=1,c=0,mn=0,cm=0;
	while(a<=10000){
		if(d>a){
			if(c>cm){
				mn=a;//menor número com maior número de divisores
				cm=c;//número de divisores maior
			}a++;
			d=0;
			c=0;
		}else if(a%d==0)
			c++;
		d++;	
	}
	d=1;
	printf("Menor número:%i\n Quantidade de divisores: %i\nDivisores\n",mn,cm);
	while(d<=mn){
		if(mn%d==0)
			printf("%i\n",d);
		d++;
	}
}
