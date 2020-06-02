#include <stdio.h>
/* Implemente um programa para calcular o mínimo múltiplo comum de dois número inteiros
utilizando o método da decomposição simultânea dos números em fatores primos.
MMC = 2 * 2 * 3 * 5 = 60. */

void main(){
	int a,b,c,d;
	d=2;
	c=1;
	printf("Digite dois inteiros para receber seu MMC: ");
	scanf("%i %i",&a,&b);
	do{
		if(a%d==0||b%d==0){
			c=c*d;
		}if(a%d==0&&b%d==0){
			a=a/d;
			b=b/d;
			d=2;
		}else if(b%d==0){
			b=b/d;
			d=2;
		}else if(a%d==0){
			a=a/d;
			d=2;
		}else
			d++;
	}while(a!=1||b!=1);
	printf("MMC: %i\n",c);
}
