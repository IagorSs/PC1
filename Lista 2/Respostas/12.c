#include<stdio.h>

int main(){
	int a,b,c;
	printf("Primeiro número: ");
	scanf("%i",&a);
	printf("Segundo número: ");
	scanf("%i",&b);
	printf("Terceiro número: ");
	scanf("%i",&c);
	printf("Ordem crescente dos números: ");
	if(a<=b && b<=c)
		printf("%i %i %i\n",a,b,c);
	else if(a<=c && c<=b)
		printf("%i %i %i\n",a,c,b);
	else if(b<=a && a<=c)
		printf("%i %i %i\n",b,a,c);
	else if(b<=c && c<=a)
		printf("%i %i %i\n",b,c,a);
	else if(c<=a && a<=b)
		printf("%i %i %i\n",c,a,b);
	else if(c<=b && b<=a)
		printf("%i %i %i\n",c,b,a);
}
