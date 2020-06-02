#include<stdio.h>
/* 
Sabe-se que o valor de cada 1000 litros de água corresponde a 2% do salário mínimo. Faça um
programa para receber o valor do salário mínimo e a quantidade de água consumida em uma
residência por mês. O algoritmo deverá calcular e mostrar: a) o valor da conta de água. b) o valor a ser pago com desconto de 15%.
*/
int main(){
	float s,
	      v,
	      d,
	      a;
	printf("Salário mínimo:");
	scanf("%f", &s);
	printf("Quantidade de água consumida:");
	scanf("%f", &a);
	v=(s/50/1000) *a;
	printf("Valor da conta de água R$%f\n", v);
	d=v - (v/20/3);
	printf("Valor a ser pago com desconto de 15% R$%f\n", d);
	
}
