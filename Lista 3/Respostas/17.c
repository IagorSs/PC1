#include <stdio.h>
/* Escreva um programa que solicita ao usuário um valor entre 3 e 18. Este valor representa a soma
dos valores do lançamento de 3 dados. Em seguida, o programa deve imprimir todas as
possibilidades de que no lançamento dos 3 dados a soma de seus valores seja igual ao valor
informado pelo usuário. Por exemplo, caso o usuário digite o valor 10, o programa deverá exibir:
6,3,1; 1,6,3; 6,2,2; 5,3,2 etc. Você pode exibir sequências iguais em dados diferentes, por exemplo,
as sequências 6,3,1 e 1,6,3 possuem os mesmos números, mas em dados diferentes. */

void main(){
	int a,b,c,d,s;
	b=c=d=1;
	printf("Valor correspondente à soma do lançamento de 3 dados\n");
	scanf("%i",&a);
	s=b+c+d;
	if(a>=s){
		while(b<7){
			if(s==a)
				printf ("%i %i %i\n",b,c,d);
			if(d==6&&c!=6){
				d=0;
				c++;
			}else if(d==6&&c==6){
				b++;
				c=1;
				d=0;
			}
			d++;
			s=b+c+d;
		}
	}else
		printf("Valor impossível!\n");
}
