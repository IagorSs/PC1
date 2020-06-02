#include<stdio.h>
/* Implemente um programa que solicita ao usuário um valor inteiro correspondente à idade
de uma pessoa em dias e informe­a em anos, meses e dias.
Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos
casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou
364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.
Exemplos para teste:
400 dias → 1 ano(s) 1 mes(es) 5 dia(s)
800 dias → 2 ano(s) 2 mes(es) 10 dia(s)
30 dias → 0 ano(s) 1 mes(es) 0 dia(s) */
void main(){
	int a,b,A,M,D;
	printf("Digite a idade em dias: ");
	scanf("%i",&a);
	A=a/365;
	b=a%365;
	M=b/30;
	D=b%30;
	printf("%i ano(s) %i mes(es) %i dia(s)\n",A,M,D);
}
