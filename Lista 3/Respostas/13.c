#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/* Faça um programa usando o comando “for” para calcular o seguinte somatório:
n
 (5*i+2)
i=3
em que “n” é definido pelo usuário.
Resposta: Para N=10, somatório = 276 */

int main(){
	int a,b,i,n;
	printf("Digite o número limite à variar no somatório: ");
	scanf("%i",&n);
	for(i=3,a=0;i<=n;i=i+1)
		a=a+(5*i)+2;
	printf("Somatório: %i\n",a);
}
