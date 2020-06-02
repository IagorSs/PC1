#include<stdio.h>
/* Altere o programa anterior, de tal maneira que o usuário informe a quantidade de números que serão digitados (ou seja, o valor “10” não deve ser fixo no programa). */
int main(){
	float a,d,e;
	int b,c;
	a=0;
	c=0;
	d=0;
	printf("Quantos números serão digitados? ");
	scanf("%i",&b);
	while(c<b){
		printf("Digite um número ");
		scanf("%f",&a);
		c=c+1;
		d=a+d;
	} e= d/b;
	printf("Soma: %.2f\n",d);
	printf("Média: %.2f\n",e);
}
