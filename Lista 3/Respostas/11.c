#include<stdio.h>
/* Faça um programa para calcular o valor de S, dado por:
S= 1/1 – 2/4 + 3/9 – 4/16 + ... - 10/100
Resposta: 0.645635 */
int main(){
	float b,c,d,S;
	int a;
	a=b=1;
	c=1;
	S=0;
	printf("Programa para calcular o valor de S\n");
	while(a<=10){
		if(a%2==0)
			S= S - c;
		else
			S= S + c;
		a=a+1;
		b= a*a;
		c=a/b;
	}printf("Resultado: %f\n",S);
}
