#include <stdio.h>
/* Altere o programa anterior de tal maneira que seja exibido o maior e o menor número da
sequência digitada pelo usuário. */

void main(){
	int numero,a,b;
	int contador=0;
	do{
		contador=contador+1;
		printf("Digite o %dº numero: ",contador);
		scanf("%d",&numero);
		if(contador==1){
			a=numero;
			b=numero;
		}if(numero>a)
			a=numero;
		if(numero<b)
			b=numero;
	}while(contador<10);
	printf("O menor número digitado é o: %d\n",b);
	printf("O maior número digitado é o: %d\n",a);
}
