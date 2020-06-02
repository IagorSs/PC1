#include <stdio.h>

int main(){
	int a;
	printf("Digite um número ");
	scanf("%i",&a);
	if(a<0)
	printf("Número negativo\n");
	else if(a==0)
	printf("Número 0 digitado\n");
	else
	printf("Número positivo\n");
}
