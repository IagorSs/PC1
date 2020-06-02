#include<stdio.h>

int main(){
	float a,b,c;
	int contador=0;
	printf("Primeiro número: ");
	scanf("%f",&a);
	printf("Segundo número: ");
	scanf("%f",&b);
	printf("Terceiro número: ");
	scanf("%f",&c);
	if(a==b && b==c)
	contador = contador+3;
	else if(a==b || a==c)
	contador = contador+2;
	else if(b==c)
	contador = contador+2;
	else
	contador=0;
	printf("Há %i números são iguais\n",contador);
}
