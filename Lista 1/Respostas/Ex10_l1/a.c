#include<stdio.h>
/* Escreva um programa para determinar a quantidade de litros de combustível gastos em uma viagem
por um automóvel que faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem é T=35 min e
a velocidade média do automóvel é V = 80 km/h. */
int main(){
	double t, k, l, v;
	v = 80;
	printf("Velocidade em km/h: %lf\n",v);
	v = v/60;
	printf("Velocidade em km/m: %lf\n",v);
	t = 35;
	printf("Tempo gasto em minutos na viagem:%lf\n",t);
	k = v*t;
	printf("Kilômetros percorridos: %lf\n",k);
	l = k/12;
	printf("Litros gastos na viagem:%lf\n",l);
}
