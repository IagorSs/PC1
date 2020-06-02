#include<stdio.h>
/*Faça um programa que leia um número inteiro de 4 dígitos e escreva-o invertido. Por exemplo, se o
número lido for 2548, o resultado será 8452. Dica: utilize o comando “%” que retorna resto da
divisão entre 2 números inteiros.*/
int main(){
	int a,b,c,d,e,f,g,h,i;
	printf("Insira número de 4 dígitos: ");
	scanf("%i",&a);
	b= a/1000;
	c= a%1000;
	d= c/100;
	e= c%100;
	f= e/10;
	g= e%10;
	printf("Número invertido: %i%i%i%i\n",g,f,d,b);
}
