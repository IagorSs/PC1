#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/* Faça um programa para calcular e mostrar o valor de PI, usando a série:
PI=4- 4/3 + 4/5 – 4/7 + 4/9-... até que um termo seja menor do que 0.0001, em valor absoluto.
Use a função “abs(numero)” para determinar o valor absoluto de um número. */
int main(){
	float a,b,c,d,PI;
	a=1;
	b=1;
	c=3;
	printf("Programa para calcular o valor de PI\n");
	while(c>=0.0001){
		if(a==b){
			PI=PI+(4/a);
			b=b+4;
		}else
			PI=PI-(4/a);
		a=a+2;
		c=fabs(4/a);
	}printf("%f\n",PI);
}
