#include <stdio.h>

int main(){
	int a,b;
	printf("Primeiro número: ");
	scanf("%i",&a);
	printf("Segundo número: ");
	scanf("%i",&b);
	if(a>b)
	printf("O primeiro número é maior\n");
	else if(a<b)
	printf("O segundo número é maior\n");
	else
	printf("Os números indicados devem ser diferentes\n");
}
