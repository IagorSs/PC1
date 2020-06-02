#include<stdio.h>
/* Faça um programa que leia 10 números digitados pelo usuário e exiba a soma e a média desses
valores. */
int main(){
	float a,d,e;
	int c;
	a=0;
	c=0;
	d=0;
	while(c!=10){
		printf("Digite um número ");
		scanf("%f",&a);
		c=c+1;
		d=a+d;
	} e= d/10;
	printf("Soma: %.2f\n",d);
	printf("Média: %.2f\n",e);
}
