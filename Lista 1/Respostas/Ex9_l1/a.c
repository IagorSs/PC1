#include<stdio.h>
#include<math.h>
/* 
Num triângulo retângulo, segundo Pitágoras, o quadrado da hipotenusa (a) é igual a soma dos
quadrados dos catetos (b e c). Faça um algoritmo que recebe o valor dos catetos e imprime o valor da hipotenusa.
*/
int main(){
	float a,c,b,D;
	printf("Primeiro cateto:");
	scanf("%f", &b);
	printf("Segundo cateto:");
	scanf("%f", &c);
	D=b*b + c*c;
	a=sqrt(D);
	printf("%f\n",a);
}
