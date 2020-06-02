#include<stdio.h>
/* Faça um programa que calcule o fatorial de um número. Se o número for menor do que zero, então o
programa deverá informar ao usuário que o valor é inválido. */
int main(){
	int a,b,c,d;
	printf("Número para exibição de fatorial: ");
	scanf("%i",&a);
	c=a;
	if (a!=0){
		if (a!=1){
			while (c>1){
				a=a*(c-1);
				c=c-1;
			}
			printf("Resultado: %i\n",a);
		}else
			printf("Resultado: %i\n",a);
	}else
		printf("Valor inválido\n");

}
