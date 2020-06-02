#include<stdio.h>
/* Faça um programa que leia um número inteiro positivo e determine se este é primo ou não. Por
definição, um número é primo quando é divisível somente por si próprio e por 1 */
int main(){
	int a,b,c,d;
	printf("Digite um número: ");
	scanf("%i",&a);
	b=a;
	c=0;
	a=a-1;
	while(a>1){
		if(b%a==0)
			c=c+1;
		a=a-1;
	}if(a==0)
		printf("O número é primo!\n");
	else if(a<0)
		printf("O número não é primo!\n");
	else
		printf("O número é primo!\n");


}
