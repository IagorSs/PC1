#include<stdio.h>
/* Implemente um programa que solicita ao usuário um valor real com duas casas decimais.
Este valor representa um valor monetário. A seguir, calcule o menor número de notas e
moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100,
50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre
a relação de notas necessárias.
Exemplos para teste:
===========
Valor: 576.73
NOTAS:
5 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
1 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
1 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
1 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01
===========
Valor: 4.00
NOTAS:
0 nota(s) de R$ 100.00
0 nota(s) de R$ 50.00
0 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
0 nota(s) de R$ 5.00
2 nota(s) de R$ 2.00
MOEDAS:
0 moeda(s) de R$ 1.00
0 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
0 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
0 moeda(s) de R$ 0.01
===========
Valor: 91.01
NOTAS:
0 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
2 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
0 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
0 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
0 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
1 moeda(s) de R$ 0.01 */
void main(){
	int c,cq,v,d,ci,ds,m100,m5,m25,m10,m05,m01;
	m100=m5=m25=m10=m05=m01=0;
	float a;
	printf("Digite o valor a ser decomposto\nR$");
	scanf("%f",&a);
	for(c=0;a>=100;a=a-100)
		c++;
	for(cq=0;a>=50;a=a-50)
		cq++;
	for(v=0;a>=20;a=a-20)
		v++;
	for(d=0;a>=10;a=a-10)
		d++;
	for(ci=0;a>=5;a=a-5)
		ci++;
	for(ds=0;a>=2;a=a-2)
		ds++;
	for(m100;a>=1;a=a-1)
		m100++;
	for(m5;a>=0.5;a=a-0.5)
		m5++;
	for(m25;a>=0.25;a=a-0.25)
		m25++;
	while(a>=0.10){
		m10++;
		a=a-0.10;
	}
	for(m05;a>=0.05;a=a-0.05)
		m05++;
	while(a>=0.001){
		m01++;
		a=a-0.01;
	}
	printf("NOTAS:\n%i nota(s) de R$ 100.00\n%i nota(s) de R$ 50,00\n%i nota(s) de R$ 20.00\n%i nota(s) de R$ 10.00\n",c,cq,v,d);
	printf("%i nota(s) de R$ 5.00\n%i nota(s) de R$ 2.00\nMOEDAS:\n%i moeda(s) de R$1.00\n%i moeda(s) de R$ 0.50\n",ci,ds,m100,m5);
	printf("%i moeda(s) de R$ 0.25\n%i moeda(s) de R$ 0.10\n%i moeda(s) de R$ 0.05\n%i moeda(s) de R$ 0.01\n",m25,m10,m05,m01);
}
