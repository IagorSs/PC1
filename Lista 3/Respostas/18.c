#include <stdio.h>
/* Complete o código do programa abaixo. O programa deve apresentar o maior de 10
números digitados pelo usuário.
main(){
int numero;
int contador=0;
do{
contador=contador+1;
printf("Digite o %do numero: ",contador);
scanf("%d",&numero);
                      /*****COMPLETE O PROGRAMA NESTE PONTO****
}while(contador<10);
}
Se necessário adicione novas variáveis. */

void main(){
	int numero,a;
	int contador=0;
	do{
		contador=contador+1;
		printf("Digite o %dº numero: ",contador);
		scanf("%d",&numero);
		if(contador==1)
			a=numero;
		if(numero>a)
			a=numero;
	}while(contador<10);
	printf("O maior número digitado é o: %d\n",a);
}
