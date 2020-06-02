#include <stdio.h>
/* Faça um programa para calcular o valor de S, dado por:
S= 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50 */
int main(){
	double a,b,c,d,e,f,S;
	a=1;
	b=1;
	c=1;
	S=0;
	while(a<=99){
		S= S + c;
		a=a+2;
		b=b+1;
		c=a/b;
	}printf("Resultado: %f\n",S);
}
