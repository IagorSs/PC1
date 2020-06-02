#include<stdio.h>
/* Faça um programa que calcula a média de quatro números introduzidos pelo usuário.*/
int main(){
	float a, b, c, d, e;
	printf("Primeiro número:");
	scanf("%f",&a);
	printf("Segundo número:");
	scanf("%f",&b);
	printf("Terceiro número:");
	scanf("%f",&c);
	printf("Quarto número:");
	scanf("%f",&d);
	e = (a+b+c+d)/4;
	printf("Média:%f\n",e);
}
