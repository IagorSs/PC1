#include<stdio.h>
/* Faça um programa que calcule a multiplicação de 2 números inteiros sem utilizar o operador “*”.
Em vez disso, utilize apenas o operador de adição “+”. */
int main(){
	int a,b,c,d;
	c=1;
	printf("Primeiro número: ");
	scanf("%i",&a);
	printf("Segundo número: ");
	scanf("%i",&b);
	d=a;
	while (c<b){
		a=a+d;
		c=c+1;
	}
	printf("Resultado: %i\n",a);

}
